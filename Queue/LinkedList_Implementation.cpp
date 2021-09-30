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

void enqueue(node *&head,node *&tail,int data)
{
  node *naya = new node(data);
  if(head==NULL)
  {
    head=naya;
    tail=naya;
  }
  else
  {
    tail->next=naya;
    tail=naya;
  }
}

void dequeue(node*& head)
{
  if(head==NULL) return;
  else
  {
    node *temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
  }
}

int isEmpty(node *head)
{
  return head==NULL;
}

int front(node *head)
{
  if(head==NULL) return -1;
  else return head->data;
}

int main()
{
  node *head=NULL;
  node *tail=NULL;
  enqueue(head,tail,1);
  enqueue(head,tail,2);
  enqueue(head,tail,3);
  enqueue(head,tail,4);
  enqueue(head,tail,5);
  dequeue(head);
  dequeue(head);
  cout<<front(head)<<endl;
  dequeue(head);
  cout<<front(head)<<endl;
  cout<<isEmpty(head);
}
