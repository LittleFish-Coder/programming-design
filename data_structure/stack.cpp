#include<iostream>
#define MAX 1000 // Maximum size of the stack

using namespace std;

class Stack{

    int top;
    int arr[MAX];

public:
    Stack() {top = -1; }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }

    void push(int x){
        if(top+1 > MAX){
            cout << "Stack overflow" << endl;
        } else {
            arr[++top] = x;
        }
    }

    int pop(){
        if (!isEmpty()){
            return arr[top--];
        } else{
            cout << "Stack is empty" << endl;
            return 0;
        }
    }

    int peek(){
        if (isEmpty()){
            cout << "Stack is empty" << endl;
            return 0;
        } else {
            return arr[top];
        }
    }

};

int main(){

    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << stack.pop() << " popped from stack\n";
    cout << "Top element is " << stack.peek() << "\n";

    return 0;
}