#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node* CreateLinkedList(int arr[], int index, int size)
{
    if(index == size)
    {
        return NULL;
    }

    Node *temp;
    temp = (Node*)malloc(sizeof(Node));

    temp->data = arr[index];

    temp->next = CreateLinkedList(arr, index + 1, size);

    return temp;
}

int main()
{
    Node *head;
    head = NULL;

    int arr[] = {2,4,6,8,3};

    head = CreateLinkedList(arr, 0, 5);

    // Print linked list
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}