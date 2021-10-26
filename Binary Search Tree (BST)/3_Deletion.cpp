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
node* findMin(node* root)
{
  while(root->left!=NULL)
  {
    root=root->left;
  }
  return root;
}
node* remove(node* root,int target)
{
  if(root==NULL) return NULL;
  if(target < root->data)
  {
    root->left = remove(root->left,target);
  }
  else if(target > root->data)
  {
    root->right = remove(root->right,target);
  }
  else
  {
    // no child (leaf node)
    if(root->left==NULL && root->right==NULL)
    {
      delete root;
      root=NULL;
    }
    // Single child
    else if(root->left==NULL)
    {
      node* temp=root;
      delete temp;
      root=root->right;
    }
    else if(root->right==NULL)
    {
      node* temp=root;
      delete temp;
      root=root->left;
    }
    //double children
    else
    {
      node* temp =findMin(root->right);
      root->data = temp->data;
      root->right = remove(root->right,temp->data);
    }
    return root;
  }
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
  node* newRoot = remove(root,6);
  cout<<endl;
  inOrder(root);
}
