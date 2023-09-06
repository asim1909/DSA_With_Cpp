// Write a c++ code to Deletion of first node in doubly linked list by using DSA algorithm

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

Node *head = NULL;

void insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;

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

void traverse()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deleteFirstNode()
{
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
}

int main()
{
    insert(20);
    insert(40);
    insert(60);
    insert(80);
    insert(10);
    traverse();
    cout << endl;
    deleteFirstNode();
    traverse();
    return 0;
}