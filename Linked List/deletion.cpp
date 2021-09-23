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

void print(node *head)
{
  node *temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

void pop_front(node *&head)
{
  if(head==NULL)
  {
    return ;
  }
  else
  {
    node *temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
  }
}

void pop_back(node *&head,node *&tail)
{
  if(head==NULL)
  {
    return ;
  }
  else
  {
    node *temp=head;
    node *prev=NULL;
    while(temp->next!=NULL)
    {
      prev=temp;
      temp=temp->next;
    }
    temp->next=NULL;
    prev->next=NULL;
    delete temp;
  }
}

void remove(node *&head,node *&tail,int pos)
{
  if(pos==1)
  {
    pop_front(head);
  }
  else if(pos>length(head))
  {
    pop_back(head,tail);
  }
  else
  {
    int m = 1;
    node *temp=head;
    node *prev=NULL;
    while(m<pos)
    {
      prev=temp;
      temp=temp->next;
      m++;
    }
    prev->next=temp->next;
    temp->next=NULL;
    delete temp;
  }
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
  pop_front(head);
  print(head);
  cout<<endl;
  pop_front(head);
  print(head);
  cout<<endl;
  pop_back(head,tail);
  print(head);
  cout<<endl;
  remove(head,tail,2);
  print(head);
  cout<<endl;
}
