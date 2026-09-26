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
    Node *Head = NULL;

    int arr[] = {1,3,5,7,9};

    // Insert node at end
    for(int i = 0; i < 5; i++)
    {
        // Linked list doesn't exist
        if(Head == NULL)
        {
            Head = (Node*)malloc(sizeof(Node));

            Head->data = arr[i];
            Head->next = NULL;
        }

        // Linked list exists
        else
        {
            Node *temp = Head;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            Node *temp2;
            temp2 = (Node*)malloc(sizeof(Node));

            temp2->data = arr[i];
            temp2->next = NULL;

            temp->next = temp2;
        }
    }

    // Middle insertion
    Node *temp = Head;

    while(temp->data != 5)
    {
        temp = temp->next;
    }

    Node *temp2;
    temp2 = (Node*)malloc(sizeof(Node));

    temp2->data = 4;
    temp2->next = temp->next;

    temp->next = temp2;

    // Print
    temp = Head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}