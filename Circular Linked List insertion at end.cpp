#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL;
    Node *newNode, *temp;

    // First node
    newNode = (Node*)malloc(sizeof(Node));

    cout << "Enter data: ";
    cin >> newNode->data;

    newNode->next = newNode;
    head = newNode;

    // Insert at end
    newNode = (Node*)malloc(sizeof(Node));

    cout << "Enter data: ";
    cin >> newNode->data;

    temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;

    // Display
    temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    while (temp != head);

    return 0;
}