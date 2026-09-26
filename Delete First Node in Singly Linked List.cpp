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
    Node *head = NULL;

    int arr[] = {1,3,5,7,9};

    // Create linked list
    for(int i = 0; i < 5; i++)
    {
        Node *newNode;
        newNode = (Node*)malloc(sizeof(Node));

        newNode->data = arr[i];
        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    // Delete first node
    if(head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    // Print
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}