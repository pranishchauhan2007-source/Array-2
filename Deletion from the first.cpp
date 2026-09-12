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

    // Step 1: Check underflow
    if (start == NULL)
    {
        cout << "List is Empty";
        return 0;
    }

    // Step 2: Set PTR = START
    ptr = start;

    // Step 3: START = START->next
    start = start->next;

    // Step 4: Print element
    cout << "Deleted element = " << ptr->data << endl;

    // Step 5: Free PTR
    delete ptr;

    // Display remaining list
    cout << "List after deletion: ";
    while (start != NULL)
    {
        cout << start->data << " ";
        start = start->next;
    }

    return 0;
}