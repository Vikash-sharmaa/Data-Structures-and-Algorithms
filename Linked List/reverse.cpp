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

void pushBack(node *&head,node *&tail,int data)
{
  node *naya = new node(data);
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

void print(node *head)
{
  node *temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

void reverse_iterative(node *&head,node *&tail)
{
  node *c=head;
  node *n=NULL;
  node *p=NULL;
  while(c!=NULL)
  {
    n=c->next;
    c->next=p;
    p=c;
    c=n;
  }
  node *temp = head;
  head=tail;
  tail=temp;
}


int main()
{
  node *head=NULL;
  node *tail=NULL;
  pushBack(head,tail,1);
  pushBack(head,tail,2);
  pushBack(head,tail,3);
  pushBack(head,tail,4);
  pushBack(head,tail,5);
  pushBack(head,tail,6);
  print(head);
  cout<<endl;
  reverse_iterative(head,tail);
  print(head);
  cout<<endl;
}
