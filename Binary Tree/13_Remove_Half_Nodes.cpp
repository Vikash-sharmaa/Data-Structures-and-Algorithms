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

vector<int> res;
void inOrder(node* root)
{
  if(root==NULL) return;
  inOrder(root->left);
  res.push_back(root->data);
  inOrder(root->right);
}
/*--------------------------------------------------------------------------------------*/
node* removeHalfNodes(node* root)
{
  if(root==NULL) return NULL;
  root->left = removeHalfNodes(root->left);
  root->right=removeHalfNodes(root->right);
  if(root->left==NULL && root->right==NULL) return root;
  if(root->left==NULL)
  {
    node* newRoot = root->right;
    delete root;
    return newRoot;
  }
  if(root->right==NULL)
  {
    node* newRoot = root->left;
    delete root;
    return newRoot;
  }
  return root;
}
/*--------------------------------------------------------------------------------------*/
int main()
{
  node *root = build_tree();
  node* newRoot=removeHalfNodes(root);
  inOrder(newRoot);
  for(auto x:res)
  {
    cout<<x<<" ";
  }
}
