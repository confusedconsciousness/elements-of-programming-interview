#include <iostream>
#include <string>
using namespace std;
// in this program we will convert a prefix expression to postfix expression
const int MAX_SIZE = 100;
char ARRAY[MAX_SIZE]; // maximum length of expression
class Stack{
    int TOP;
public:
    Stack(){
        TOP = -1;
    }
    void push(char c);
    void pop();
    char top();
    int empty();
};

void Stack::push(char c) {
    if(TOP == MAX_SIZE){
        cout<<"Stack overflow";
    }else{
        ++TOP;
        ARRAY[TOP] = c;
    }
}

void Stack::pop(){
    if(TOP == -1){
        cout<<"Stack underflow";
    }else{
        --TOP;
    }
}

char Stack::top() {
    return ARRAY[TOP];
}

int Stack::empty() {
    return TOP;
}

int giveWeightage(char c){
    if(c == '*'){
        return 10;
    }else if(c == '/'){
        return 10;
    }else if(c == '+'){
        return 5;
    }else if(c == '-'){
        return 5;
    }
}


int main() {
    string infix;
    getline(cin, infix);
    // infix[i] is a character type so use single quotes to compare
    // for conversion of infix to postfix we need to maintain a stack
    int flag = 0;
    Stack S;
    for(int i = 0; infix[i] != 0; ++i){

        if((infix[i] >= 65 && infix[i] <= 90) || (infix[i] >= 97 && infix[i] <= 122)){
            // this means the expression is an alphabet
            cout<<infix[i];
        }else if(infix[i] == ')'){
            // pop out from the stack until you get the opening (
            while(true){
                if(S.top() == '('){
                    S.pop();
                    break;
                }else{
                    cout<<S.top();
                    S.pop();
                }
            }

        }else if(infix[i] == '('){
            S.push(infix[i]);
        }
        else if(S.top() != '(' && giveWeightage(infix[i]) < giveWeightage(S.top()) && S.empty() != -1){
            // then pop that expression and push the current expression
            while(true){
                if(S.top() != '(' && giveWeightage(infix[i]) < giveWeightage(S.top())){
                    cout<<S.top();
                    S.pop();
                }else{
                    break;
                }
            }
            // now push the current
            S.push(infix[i]);
        }else{
            S.push(infix[i]);
        }

    }
    while(S.empty() != -1){
        cout<<S.top();
        S.pop();
    }
    //((A+B)—C*(D/E))+F

    return 0;
}