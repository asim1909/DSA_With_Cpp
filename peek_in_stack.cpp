// write a cpp program to preform peek function by using DSA?

#include <iostream>
#include <stack>

using namespace std;

int peek(stack<int> &s) {
    if (!s.empty()) {
        return s.top();
    } else {
        cout << "Stack is empty." << endl;
        return -1; 
    }
}

int main() {
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);

    int topElement = peek(myStack);

    if (topElement != -1) {
        cout << "Top element of the stack: " << topElement << endl;
    }

    return 0;
}
