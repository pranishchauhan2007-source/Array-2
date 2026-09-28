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

    // Create linked list
    for(int i = 0; i < 5; i++)
    {
        Node *temp = (Node*)malloc(sizeof(Node));
        temp->data = arr[i];
        temp->next = NULL;

        if(Head == NULL)
        {
            Head = temp;
        }
        else
        {
            Node *tail = Head;

            while(tail->next != NULL)
            {
                tail = tail->next;
            }

            tail->next = temp;
        }
    }

    // Delete node with data = 5
    Node *temp = Head;
    Node *prev = NULL;

    while(temp != NULL)
    {
        if(temp->data == 5)
        {
            if(prev == NULL)
            {
                Head = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }

            free(temp);
            break;
        }

        prev = temp;
        temp = temp->next;
    }

    // Print linked list
    temp = Head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}