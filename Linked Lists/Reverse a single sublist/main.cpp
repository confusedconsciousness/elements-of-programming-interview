#include <iostream>
using namespace std;
// Reverse a single sublist
// create a LL
struct Node{
    int value;
    struct Node* next;
};

struct Node* createNode(int value){
    struct Node* newNode = new Node();
    newNode->value = value;
    newNode->next = nullptr;
    return newNode;
}

struct Node* createLL(int *A, int n){
    struct Node* head = nullptr;
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

struct Node* reverseList(struct Node* head, int n){
    // we'll be needing three pointers
    // n tells how many time we need to update c
    struct Node* a = head;
    struct Node* b = a->next;
    struct Node* c = b->next;
    int count = 0;
    a->next = nullptr;
    while(count != n){
        b->next = a;
        a = b;
        b = c;
        c = c->next;
        ++count;
    }
    b->next = a;
    // in the end the head should point the tail
    return b; // b is the new head
}

struct Node* reverseSublist(struct Node* head, int a, int b){
    // first we need to get the pointers to there successor nodes
    struct Node* a1 = head;
    struct Node* b1 = head;
    int c1 = 1;
    int c2 = 1;
    while(c1 != a - 1){
        a1 = a1->next;
        ++c1;
    }
    while(c2 != (b + 1)){
        b1 = b1->next;
        ++c2;
    }
    // a1  points to the successor nodes not b1
    struct Node* temp1 = a1->next;
    struct Node* temp2 = reverseList(temp1, (b - a - 3 + 2));
    a1->next = temp2;
    temp1->next = b1;
    return head;
}


void showLL(struct Node* head){
    struct Node* temp = head;
    while(temp != nullptr){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {

    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    struct Node* head = createLL(A, sizeof(A) / sizeof(int));
    //showLL(head);
    int a, b;
    cin>>a>>b;
    if(a == b){
        cout<<"b should be greater than a";
    }else{
        struct Node* final = reverseSublist(head, a, b);
        showLL(final);
    }

    return 0;
}