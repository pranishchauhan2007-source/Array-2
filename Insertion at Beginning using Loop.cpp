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
    Node *Head;
    Head = NULL;

    int arr[] = {1,3,5,7,9};

    // Insert node at beginning
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
            Node *temp;
            temp = (Node*)malloc(sizeof(Node));

            temp->data = arr[i];
            temp->next = Head;
            Head = temp;
        }
    }

    // Print the values
    Node *temp = Head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}