#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = (Node*)malloc(sizeof(Node));
    Node *temp = head;

    cout << "Enter data: ";
    cin >> head->data;
    head->next = NULL;

    // Loop se 4 nodes create aur connect
    for(int i = 0; i < 4; i++)
    {
        Node *newNode = (Node*)malloc(sizeof(Node));

        cout << "Enter data: ";
        cin >> newNode->data;

        newNode->next = NULL;

        temp->next = newNode;
        temp = newNode;
    }

    // Display
    Node *ptr = head;

    while(ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    return 0;
}