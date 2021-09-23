#include<bits/stdc++.h>
using namespace std;

class node
{
  public :
  int data;
  node *next;
  node(int data)
  {
    this->data=data;
    next=NULL;
  }
};

void push(node *&head,int data)
{
  node *naya =new node(data);
  if(head==NULL)
  {
    head=naya;
  }
  else
  {
    naya->next=head;
    head=naya;
  }
}

void pop(node *&head)
{
  if(head==NULL)
  {
    return ;
  }
  else
  {
    node *temp=head;
    head=head->next;
    delete temp;
  }
}

bool empty(node *head)
{
  return head==NULL;
}

int top(node *head)
{
  return head->data;
}

int main()
{
  node *head=NULL;
  push(head,1);
  push(head,2);
  push(head,3);
  push(head,4);
  push(head,5);
  pop(head);
  pop(head);
  cout<<top(head)<<endl;
  cout<<empty(head);
}
