// Write a program to do Push, Pop, Peek and Display by taking user input.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *top = NULL;

void push(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = top;
    top = temp;
}

void pop()
{
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl;
        return;
    }
    Node *temp = top;
    top = top->next;
    delete temp;
}

void peek()
{
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl;
        return;
    }
    cout << top->data << endl;
}

void display()
{
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl;
        return;
    }
    Node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    int choice, data;
    while (1)
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data to push: ";
            cin >> data;
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            cout << "Invalid Choice" << endl;
        }
        cout << endl;
    }
    return 0;
}