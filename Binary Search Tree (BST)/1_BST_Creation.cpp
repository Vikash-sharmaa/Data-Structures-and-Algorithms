#include<bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node* left;
  node* right;
  node(int data)
  {
    this->data=data;
    left=right=NULL;
  }
};

void inOrder(node* root)
{
  if(root==NULL) return ;
  inOrder(root->left);
  cout<<root->data<<" ";
  inOrder(root->right);
}
/*---------------------------------------------------------------------------------------------------------*/
node* insert(node* root,int data)
{
  if(root==NULL)
  {
    return new node(data);
  }
  if(data<=root->data)
  {
    root->left = insert(root->left,data);
  }
  else
  {
    root->right = insert(root->right,data);
  }
  return root;
}
/*---------------------------------------------------------------------------------------------------------*/
int main()
{
  node* root = NULL;
  int a[]={8,3,10,1,6,14,4,7,13};
  for(int x:a)
  {
    root = insert(root,x);
  }
  inOrder(root);
}
