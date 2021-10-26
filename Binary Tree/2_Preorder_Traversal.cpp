#include<bits/stdc++.h>
using namespace std;
// 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
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

node* build_tree()
{
    int d; cin>>d;
    if(d==-1) return NULL;
    node *naya = new node(d);
    naya->left = build_tree();
    naya->right = build_tree();
    return naya;
}

void preorder(node *root)
{
  if(root==NULL) return ;
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}

int main()
{
  node *root = build_tree();
  preorder(root);
}
