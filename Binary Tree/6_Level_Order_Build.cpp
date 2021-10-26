#include<bits/stdc++.h>
using namespace std;
// 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1
class node
{
  public :
  int data;
  node* left;
  node* right;
  node(int data)
  {
    this->data=data;
    left=right=NULL;
  }
};

node* levelorderbuild()
{
  int d; cin>>d;
  node* root=new node(d);
  queue<node*>q;
  q.push(root);
  while(!q.empty())
  {
    node* current=q.front();
    q.pop();
    int c1,c2;
    cin>>c1>>c2;
    if(c1!=-1)
    {
      current->left=new node(c1);
      q.push(current->left);
    }
    if(c2!=-1)
    {
      current->right=new node(c2);
      q.push(current->right);
    }
  }
  return root;
}

void levelorder(node* root)
{
  queue<node*>q;
  q.push(root);
  q.push(NULL);
  while(!q.empty())
  {
    node* front = q.front();
    q.pop();
    if(front==NULL)
    {
      cout<<endl;
      if(!q.empty())
      {
        q.push(NULL);
      }
    }
    else
    {
      cout<<front->data<<" ";
      if(front->left)
      {
        q.push(front->left);
      }
      if(front->right)
      {
        q.push(front->right);
      }
    }
  }
}


int main()
{
  node *root = levelorderbuild();
  levelorder(root);
}
