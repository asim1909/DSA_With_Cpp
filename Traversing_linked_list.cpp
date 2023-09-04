// write a program to traverse a linked list

// Algorithm: Traversing a linked list

/*
    set PTR = START. [START is pointing to the first node in the list]
    Repeat while PTR ≠ NULL
        Print PTR -> DATA.
        Set PTR = PTR -> NEXT. [Move PTR to point to next node]
    [END OF LOOP]
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void create(struct node **);

void traverse(struct node *);

int main()
{
    struct node *head = NULL;
    create(&head);
    traverse(head);
    return 0;
}
