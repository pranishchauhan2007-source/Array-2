#include<iostream>
using namespace std;
struct Node
{ 
  int data;
  Node *next;
};

Node *createList()
{
    Node *head=(Node*)malloc(sizeof(Node));
    Node *first=(Node*)malloc(sizeof(Node));
    Node *second=(Node*)malloc(sizeof(Node));
    cout<<"Enter data for head:";
    cin>>head->data;
    head->next=first;
    cout<<"Enter data for first:";
    cin>>first->data;
    first->next=second;
    cout<<"Enter data for second:";
    cin>>second->data;
    second->next=NULL;
    return head;
}
  Node *insertAtBeginning(Node *head)
    {
     Node *temp=(Node*)malloc(sizeof(Node));
     cout<<"Enter new data :";
     cin>>temp->data;
     temp->next=head;
     head=temp;
     return head;
    }
    
    void display (Node *head)
    {
      Node *ptr= head;
      while(ptr!=NULL)
      {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
      }
    }
    int main()
    {
     Node *head=createList();
     head=insertAtBeginning(head);
     display(head);
     return 0;
    }