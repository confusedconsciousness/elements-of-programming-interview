#include <iostream>
using namespace std;
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

struct Node* removeDuplicate(struct Node* head){
    // we'll have two pointers
    struct Node* p1 = head;
    struct Node* p2 = head;
    while(p1 != nullptr){
        // we want to traverse completely
        while(p2->value == p1->value){
            p2 = p2->next;
            if(p2 == nullptr){
                break;
            }
        }
        // if we are outside the while it means we got a distinct node
        p1->next = p2;
        p1 = p1->next;
    }
    return head;
}



int main() {
    int A[] = {2, 5, 6, 9, 12, 12, 12, 15};
    struct Node* head = createLL(A, sizeof(A) / sizeof(int));
    //show(head);
    head = removeDuplicate(head);
    show(head);
    return 0;
}