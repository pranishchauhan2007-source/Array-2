#include <iostream>
#include <cstdlib>
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

    // First node
    Node *n1 = (Node*)malloc(sizeof(Node));
    n1->data = 10;
    n1->prev = NULL;
    n1->next = NULL;
    Head = n1;

    // Second node
    Node *n2 = (Node*)malloc(sizeof(Node));
    n2->data = 20;
    n2->prev = n1;
    n2->next = NULL;
    n1->next = n2;

    // Third node
    Node *n3 = (Node*)malloc(sizeof(Node));
    n3->data = 30;
    n3->prev = n2;
    n3->next = NULL;
    n2->next = n3;

    // Insert 25 after 20
    Node *newNode = (Node*)malloc(sizeof(Node));

    newNode->data = 25;

    newNode->next = n2->next;
    newNode->prev = n2;

    n2->next->prev = newNode;
    n2->next = newNode;

    // Display
    Node *temp = Head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}