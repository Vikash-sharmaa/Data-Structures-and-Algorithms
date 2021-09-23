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

int kthLastElement(node *head,int k)
{
  node *fast=head;
  node *slow=head;
  while(k--)
  {
    fast=fast->next;
  }
  while(fast!=NULL)
  {
    fast=fast->next;
    slow=slow->next;
  }
  return slow->data;
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
  cout<<kthLastElement(head,3);
}
