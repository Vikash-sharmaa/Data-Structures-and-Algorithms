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


/*---------------------------------------------------------------------------------------------------------*/
node* insert(node* root,int data)
{
  if(root==NULL) return new node(data);
  if(data <= root->data)
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

/*---------------------------------------------------------------------------------------------------------*/
bool search(node* root,int target)
{
  if(root==NULL) return false;
  if(root->data == target) return true;
  else if(target<root->data) return search(root->left,target);
  else return search(root->right,target);
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
  cout<<search(root,180);
}
