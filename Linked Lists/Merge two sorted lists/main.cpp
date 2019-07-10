#include <iostream>
using namespace std;
// the only thing our program can change is the next field of the linked list
// Time complexity O(n)
// Space Complexity O(1)
// basic structure of linked list
struct Node{
    int value;
    struct Node* next;
};

struct Node* createNode(int value){
    // this function initialise a node and returns its pointer
    struct Node* newNode = new Node();
    newNode->value = value;
    newNode->next = nullptr;
    return newNode;
}

struct Node* createLL(int *A, int n){
    // it takes an array as its input and convert it into a linked list
    // returns a pointer to the head
    struct Node* head = nullptr;
    // we'll be linking the node at the beginning because it will be a constant time operation
    for(int i = 0; i < n; ++i){
        if(head == nullptr){
            head = createNode(A[n - i - 1]);
        }else{
            struct Node* temp = createNode(A[n - i - 1]);
            temp->next = head;
            head = temp;
        }
    }
    return head;
}

void show(struct Node* head){
    struct Node* temp = head;
    while(temp != nullptr){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

struct Node* merge(struct Node* head1, struct Node* head2){
    struct Node* p1 = head1;
    struct Node* p2 = head2;

    int flag = 0;
    if(p1->value >= p2->value){
        flag = 1;
        // return head2
    }

    // algorithm, till when this assignment should carry on
    struct Node* temp;
    while(p1 != nullptr &&  p2 != nullptr){
        if(p1->value < p2->value){
            temp = p1;
            while(temp->next != nullptr && temp->next->value <= p2->value ){

                temp = temp->next;

            }

            p1 = temp->next;

            temp->next = p2;

            if(p1 == nullptr){
                break;
            }

        }else{

            temp = p2;
            while(temp->next != nullptr && temp->next->value <= p1->value ){

                temp = temp->next;

            }

            p2 = temp->next;

            temp->next = p1;

            if(p2 == nullptr){
                break;
            }
        }

    }

    if(flag == 1){
        return head2;
    }else{
        return head1;
    }


}

int main() {
    int L1[] = {1, 3, 8, 10, 45};
    int L2[] = {2, 3, 5, 18, 100};
    struct Node* head1 = createLL(L1, sizeof(L1) / sizeof(int));
    struct Node* head2 = createLL(L2, sizeof(L2) / sizeof(int));
    show(head1);
    show(head2);

    // now let's merge them
    struct Node* mergedHead = merge(head1, head2);
    cout<<"\nMerged Output:\n";
    show(mergedHead);
    return 0;
}