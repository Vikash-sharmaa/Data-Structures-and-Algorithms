#include<bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *next;
  node(int data)
  {
    this->data=data;
    next=NULL;
  }
};

int length(node *head)
{
  int counter=0;
  node *temp=head;
  while(temp!=NULL)
  {
    counter++;
    temp=temp->next;
  }
  return counter;
}

void pushFront(node * &head,node * &tail,int data)
{
  node *naya =new node(data);
  if(head==NULL)
  {
    head=tail=naya;
  }
  else
  {
    naya->next=head;
    head=naya;
  }
}

void pushBack(node * &head,node * &tail,int data)
{
  node *naya=new node(data);
  if(head==NULL)
  {
    head=tail=naya;
  }
  else
  {
    tail->next=naya;
    tail=naya;
  }
}


void insert(node *&head,node *&tail,int data,int pos)
{
  if(pos==0)
  {
    pushFront(head,tail,data);
  }
  else if(pos>length(head))
  {
    pushBack(head,tail,data);
  }
  else
  {
    int m=1;
    node *temp=head;
    while(m<=pos-1)
    {
      temp=temp->next;
      m++;
    }
    node *naya=new node(data);
    naya->next=temp->next;
    temp->next=naya;
  }
}


void print(node *head)
{
  node *temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

int main()
{
  node *head=NULL;
  node *tail=NULL;
  pushFront(head,tail,1);
  pushFront(head,tail,0);
  pushBack(head,tail,3);
  pushBack(head,tail,4);
  insert(head,tail,2,2);
  insert(head,tail,10,0);
  print(head);
}
