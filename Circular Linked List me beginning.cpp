#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL;
    Node *newNode;
    Node *temp;

    // First node
    newNode = new Node;
    newNode->data = 10;
    newNode->next = newNode;
    head = newNode;

    // Insert at beginning
    newNode = new Node;
    newNode->data = 5;

    temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    newNode->next = head;
    temp->next = newNode;
    head = newNode;

    // Display
    temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    return 0;
}