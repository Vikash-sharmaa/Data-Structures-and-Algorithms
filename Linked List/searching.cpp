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

bool iterative_search(node *head,int target)
{
  node *temp=head;
  while(temp!=NULL)
  {
    if(temp->data = target)
    {
      return true;
    }
    temp=temp->next;
  }
  return false;
}

bool recursive_search(node *head,int target)
{
  if(head==NULL)
  {
    return false;
  }
  if(head->data==target)
  {
    return true;
  }
  return recursive_search(head->next,target);
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
  cout<<iterative_search(head,6)<<endl;
  cout<<recursive_search(head,2);
}
