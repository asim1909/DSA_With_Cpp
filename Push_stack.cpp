// write a cpp program to preform Push in stack by using DSA logics?

#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; 
    }

    void push(int element) {
        if (top >= MAX_SIZE - 1) {
            cout << "Cannot push element." << endl;
        } else {
            arr[++top] = element;
            cout << element << " pushed into the stack." << endl;
        }
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20); 
    myStack.push(30); 

    return 0;
}
