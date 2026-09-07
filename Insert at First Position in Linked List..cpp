#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = (Node*)malloc(sizeof(Node));
    Node *first = (Node*)malloc(sizeof(Node));
    Node *second = (Node*)malloc(sizeof(Node));
    Node *third = (Node*)malloc(sizeof(Node));
    Node *fourth = (Node*)malloc(sizeof(Node));
    Node *fifth = (Node*)malloc(sizeof(Node));
    head->data = 10;
    head->next = first;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = third;
    third->data = 40;
    third->next = fourth;
    fourth->data = 50;
    fourth->next = fifth;
    fifth->data = 60;
    fifth->next = NULL;
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = 5;
    newNode->next = head;
    head = newNode;
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->data << endl;
        tem = tem->next;
    }
}
