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
    Node *Head=NULL;
    Node *tail=NULL;

    int arr[] = {1,3,5,7,9,4};

    // Insert node at end
    for(int i = 0; i < 6; i++)
    {
        // Linked list doesn't exist
        if(Head == NULL)
        {
            Head = (Node*)malloc(sizeof(Node));
            Head->data = arr[i];
            Head->next = NULL;
            tail=Head;
        }

        // Linked list exists
        else
        {
            Node *newNode;
            newNode = (Node*)malloc(sizeof(Node));

            newNode->data = arr[i];
            newNode->next = NULL;

            tail->next = newNode;
            tail = newNode;
        }
    }

    // Print the values
    Node *temp = Head;

    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}