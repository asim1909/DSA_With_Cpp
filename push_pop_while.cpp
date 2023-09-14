// Write a program to preform push and pop by using while loop.


#include <iostream>
using namespace std;

const int MAXSIZE = 100;

int stack[MAXSIZE];
int top = -1;

void push(int data) {
    if (top >= MAXSIZE - 1) {
        cout << "Overflow" << endl;
    } else {
        stack[++top] = data;
        cout << "Pushed " << data << "on stack." << endl;
    }
}

void pop() {
    if (top < 0) {
        cout << "Underflow" << endl;
    } else {
        cout << "Popped " << stack[top--] << " from the stack." << endl;
    }
}

void display() {
    if (top < 0) {
        cout << "Empty." << endl;
    } else {
        cout << "Elements: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, data;

    while (true) {
        cout << "Press 1 to Push, 2 to Pop, 3 to Display, 4 to Exit: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value to push: ";
            cin >> data;
            push(data);
        } else if (choice == 2) {
            pop();
        } else if (choice == 3) {
            display();
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
