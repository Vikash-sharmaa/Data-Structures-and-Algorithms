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
// O(n) - traversing each node of the tree
int minDepth(node* root)
{
  if(root==NULL) return 0;
  if(root->left == NULL && root->right==NULL) return 1;
  int l,r;
  if(root->left)
  {
    l=minDepth(root->left);
  }
  if(root->right)
  {
    r=minDepth(root->right);
  }
  return min(l,r)+1;
}

// better solution -- find min level
int level=0;
int minDepthOptimized(node *root)
{
  if(root==NULL) return level;
  level++;
  return min(minDepthOptimized(root->left),minDepthOptimized(root->right));
}
int main()
{
  node *root = build_tree();
  cout<<minDepth(root)<<endl;
  cout<<minDepthOptimized(root);
}
