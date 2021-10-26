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

int countLeaves(node* root)
{
  if(root==NULL) return 0;
  if(root->left==NULL && root->right==NULL) return 1;
  return countLeaves(root->left) + countLeaves(root->right);
}

int main()
{
  node *root = build_tree();
  cout<<countLeaves(root);
}
