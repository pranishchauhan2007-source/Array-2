#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *start = new Node{10, NULL};
    start->next = new Node{20, NULL};
    start->next->next = new Node{30, NULL};

    Node *ptr;

    // Step 1: Underflow check
    if (start == NULL)
    {
        cout << "Linked List empty";
        return 0;
    }

    // Step 2: Only one node
    if (start->next == NULL)
    {
        ptr = start;
        start = NULL;
        cout << "Deleted element = " << ptr->data;
        delete ptr;
        return 0;
    }

    // Step 3: Set PTR = START
    ptr = start;

    // Step 4: Move PTR to second last node
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }

    // Step 5: Delete last node
    Node *temp = ptr->next;
    ptr->next = NULL;

    cout << "Deleted element = " << temp->data << endl;

    delete temp;

    // Display list
    cout << "List after deletion: ";

    Node *p = start;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }

    return 0;
}