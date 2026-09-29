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

    int value = 40;

    // Create new node
    Node *NewNode;
    NewNode = (Node*)malloc(sizeof(Node));

    // Overflow check
    if (NewNode == NULL)
    {
        cout << "Overflow";
        return 0;
    }

    NewNode->data = value;

    // If list is empty
    if (Head == NULL)
    {
        NewNode->next = NewNode;
        NewNode->prev = NewNode;
        Head = NewNode;
    }
    else
    {
        NewNode->next = Head;
        NewNode->prev = Head->prev;

        Head->prev->next = NewNode;
        Head->prev = NewNode;
    }

    // Display list
    Node *Temp = Head;

    do
    {
        cout << Temp->data << " ";
        Temp = Temp->next;
    }
    while (Temp != Head);

    return 0;
}
