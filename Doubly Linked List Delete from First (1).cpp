#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Insert at end
void insertEnd(Node*& head, int value) {

    Node* newNode = new Node();

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    // Agar list empty hai
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    // Last node tak jao
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // New node ko last me connect karo
    temp->next = newNode;
    newNode->prev = temp;
}

// Delete from first
void deleteFirst(Node*& head) {

    // List empty hai
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    // First node ko store karo
    Node* temp = head;

    // Head ko second node par shift karo
    head = head->next;

    // Agar list empty nahi hui
    if (head != NULL) {
        head->prev = NULL;
    }

    // Old first node delete
    delete temp;
}

// Display
void display(Node* head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    Node* head = NULL;

    // List create
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);

    cout << "Before deletion: ";
    display(head);

    // Delete first node
    deleteFirst(head);

    cout << "After deletion: ";
    display(head);

    return 0;
}