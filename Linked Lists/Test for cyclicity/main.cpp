#include <iostream>
using namespace std;
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

bool testCycle(struct Node* head){
    struct Node* fastIterator = head->next; // it will be placed ahead just in case
    struct Node* slowIterator = head;

    // we will run the two iterators one will run fast whereas the other will run slow
    // if the faster one at any time overtakes the slower one we'll say there is a cycle
    int counter = 1;
    int flag = 0;
    while(fastIterator != nullptr){
        if(fastIterator == slowIterator){
            flag = 1;
            break;
        }
        if(counter % 5 == 0){
            // increment the slowIterator
            slowIterator = slowIterator->next;
            ++counter;
        }else{
            fastIterator = fastIterator->next;
            ++counter;
        }

    }
    return flag == 1;

}

int main() {
    int A[] = {1, 5, 9, 0, 12, 3, 5, 9, 19, 34};
    struct Node* head = createLL(A, sizeof(A) / sizeof(int));
    // let's add a cycle
    struct Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    // we're at last node, let's point it to the head
    temp->next = head; // cycle created
    
    if(testCycle(head)){
        cout<<"Cycle is present";
    }else{
        cout<<"No cycle detected";
    }
    return 0;
}