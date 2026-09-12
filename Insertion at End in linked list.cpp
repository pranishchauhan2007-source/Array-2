#include<iostream>
using namespace std;
struct Node
{ 
  int data;
  Node *next;
};

int main()
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
    if(head==NULL)
    {
     Node *head=(Node*)malloc(sizeof(Node));
     cout<<"Enter data for head:";
     cin>>head->data;
     head->next=NULL;
    }
    else
    {
    Node *temp=(Node*)malloc(sizeof(Node));
    cout << "Enter data for temp:" ;
    cin>>temp->data;
    temp->next=NULL;
    Node *tail=head;
    
    while(tail->next!=NULL)
    {
    tail=tail->next;
    }
    Node *ptr= head;
    tail->next=temp;
    while(ptr!=NULL){
     cout<<ptr->data<<endl;
     ptr=ptr->next;
    }
    return 0;
    }
    
    
}