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

void printRange(node* root,int k1,int k2)
{
  if(root==NULL) return;
  if(k1<=root->data && k2>=root->data)
  {
    printRange(root->left,k1,k2);
    cout<<root->data<<" ";
    printRange(root->right,k1,k2);
  }
  else if(root->data > k2)
  {
    printRange(root->left,k1,k2);
  }
  else
  {
    printRange(root->right,k1,k2);
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
  cout<<endl;
  printRange(root,2,12);
}
