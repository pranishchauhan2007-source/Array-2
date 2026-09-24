#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

int main()
{
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;
    Node *newNode = NULL;

    // Creating first node
    first = (Node*)malloc(sizeof(Node));
    first->data = 10;
    first->prev = NULL;
    first->next = NULL;

    // Creating second node
    second = (Node*)malloc(sizeof(Node));
    second->data = 20;
    second->prev = first;
    second->next = NULL;

    first->next = second;

    head = first;

    // Display before insertion
    cout << "Before insertion: ";

    Node *ptr = head;
    while(ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    // Insertion at beginning
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = 5;

    newNode->prev = NULL;
    newNode->next = head;

    head->prev = newNode;
    head = newNode;

    // Display after insertion
    cout << "\nAfter insertion at beginning: ";

    ptr = head;
    while(ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    // Insertion at end
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = 30;
    newNode->next = NULL;

    ptr = head;

    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    newNode->prev = ptr;
    ptr->next = newNode;

    cout << "\nAfter insertion at end: ";

    ptr = head;
    while(ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    // Insertion after 20
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = 25;

    ptr = head;

    while(ptr->data != 20)
    {
        ptr = ptr->next;
    }

    newNode->next = ptr->next;
    newNode->prev = ptr;

    ptr->next->prev = newNode;
    ptr->next = newNode;

    cout << "\nAfter insertion in middle: ";

    ptr = head;
    while(ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    return 0;
}