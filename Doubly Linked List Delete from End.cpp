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
    Node *head = NULL;

    // Creating nodes
    Node *n1 = (Node*)malloc(sizeof(Node));
    Node *n2 = (Node*)malloc(sizeof(Node));
    Node *n3 = (Node*)malloc(sizeof(Node));

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n1->prev = NULL;
    n1->next = n2;

    n2->prev = n1;
    n2->next = n3;

    n3->prev = n2;
    n3->next = NULL;

    head = n1;

    // Delete first node
    if(head == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        Node *temp = head;

        head = head->next;

        if(head != NULL)
        {
            head->prev = NULL;
        }

        free(temp);
    }

    // Display list
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}