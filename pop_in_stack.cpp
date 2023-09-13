// Write a code in cpp to preform pop functions by using DSA?

#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 
int stack[MAX_SIZE];      
int top = -1;              

void push(int element) {
    if (top >= MAX_SIZE - 1) {
        cout << "Cannot push element." << endl;
    } else {
        stack[++top] = element;
        cout << element << " pushed into the stack." << endl;
    }
}


void pop() {
    if (top == -1) {
        cout << "Empty - Cannot pop." << endl;
    } else {
        cout << stack[top] << " popped from the stack." << endl;
        top--;
    }
}

int main() {
    push(10); 
    push(20); 
    push(30); 

    pop();   
    pop();    

    return 0;
}
