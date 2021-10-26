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

/*-------------------------------------------------------------------------------*/

bool isMirror(node* root1,node* root2)
{
  if(root1==NULL && root2==NULL) return true;
  if(root1 && root2 && root1->data == root2->data)
  {
    return isMirror(root1->left,root2->right) && isMirror(root1->right,root2->left);
  }
  return false;
}

// check if tree is mirror to itself
bool isMirrorImageCenter(node* root)
{
  return isMirror(root,root);
}

/*-------------------------------------------------------------------------------*/

int main()
{
  node *root = build_tree();
  cout<<isMirrorImageCenter(root);
}
