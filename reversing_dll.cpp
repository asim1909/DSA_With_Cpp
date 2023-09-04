//  Reversing the Doubly Linked List by DSA in C++ Language

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *head = NULL;

void insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *temp1 = head;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
        temp->prev = temp1;
    }
}

void reverse()
{
    Node *temp = head;
    Node *temp1 = NULL;
    while (temp != NULL)
    {
        temp1 = temp->prev;
        temp->prev = temp->next;
        temp->next = temp1;
        temp = temp->prev;
    }
    if (temp1 != NULL)
    {
        head = temp1->prev;
    }
}

void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    cout << "Before Reversing: ";
    print();

    reverse();

    cout << "After Reversing: ";
    print();

    return 0;
}

