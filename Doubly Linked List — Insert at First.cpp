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
    Node *newNode = (Node*)malloc(sizeof(Node));

    newNode->data = 10;
    newNode->prev = NULL;
    newNode->next = Head;

    if (Head != NULL)
        Head->prev = newNode;

    Head = newNode;

    cout << Head->data;

    return 0;
}