#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

int main()
{
    Node *Head = NULL;

    // Create nodes
    Node *a = (Node*)malloc(sizeof(Node));
    Node *b = (Node*)malloc(sizeof(Node));
    Node *c = (Node*)malloc(sizeof(Node));
    Node *d = (Node*)malloc(sizeof(Node));

    a->data = 10;
    b->data = 20;
    c->data = 30;
    d->data = 40;

    a->prev = NULL;
    a->next = b;

    b->prev = a;
    b->next = c;

    c->prev = b;
    c->next = d;

    d->prev = c;
    d->next = NULL;

    Head = a;

    // Insert 25 after 20
    Node *temp = b;

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = 25;

    newNode->next = temp->next;
    newNode->prev = temp;

    temp->next->prev = newNode;
    temp->next = newNode;

    // Display
    temp = Head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}