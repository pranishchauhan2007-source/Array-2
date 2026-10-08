#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Insert at End
void insertEnd(Node*& head, int value) {

    Node* newNode = new Node();

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// Delete from Middle
void deleteMiddle(Node*& head, int position) {

    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    // First node delete karna ho
    if (position == 1) {
        Node* temp = head;

        head = head->next;

        if (head != NULL) {
            head->prev = NULL;
        }

        delete temp;
        return;
    }

    Node* temp = head;

    // Position tak jao
    for (int i = 1; i < position; i++) {

        if (temp == NULL) {
            cout << "Invalid position" << endl;
            return;
        }

        temp = temp->next;
    }

    // Position exist nahi karti
    if (temp == NULL) {
        cout << "Invalid position" << endl;
        return;
    }

    // Previous node ka next
    temp->prev->next = temp->next;

    // Next node ka previous
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    // Node delete