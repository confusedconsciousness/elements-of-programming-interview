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

struct Node* rightShift(struct Node* head, int k){
    // our idea is to move the head to the kth node instead of shifting each node
    // this function takes the head to the linked list and the amount by which it needs to right shift
    struct Node* p1 = head; // this will move to the kth node
    struct Node* p2 = head;// this will move just behind the kth node
    struct Node* p3 = head;
    struct Node* temp = head;
    if(k == 0){
        // by pass everything
        return p1;
    }
    // first task is to find the length of the linked list
    int n = 0;
    while(p3->next != nullptr){
        p3 = p3->next;
        ++n;
    }
    // p3 is pointing to the tail
    int c = 0;
    k = k % n; // to take into account k > n
    while(c != (n - k) % n){
        p2 = p2->next;
        ++c;
    }
    // p2 is pointing at the (n - k - 1)th node
    p1 = p2->next;
    // p1 is pointing at kth node
    p2->next = nullptr; // break the link
    p3->next = temp;
    return p1; // p1 is the new head
}

int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    struct Node* head = createLL(A, sizeof(A) / sizeof(int));
    show(head);
    head = rightShift(head, 1);
    show(head);
    return 0;
}