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

class Diameter_Pair
{
public:
  int height;
  int diameter;
};

Diameter_Pair Optimized_Diameter(node* root)
{
  Diameter_Pair DP;
  if(root==NULL)
  {
    DP.height = DP.diameter = 0;
    return DP;
  }
  Diameter_Pair left = Optimized_Diameter(root->left);
  Diameter_Pair right = Optimized_Diameter(root->right);
  DP.height = max(left.height,right.height) + 1;
  int d1 = left.height + right.height;
  int d2 = left.diameter;
  int d3 = right.diameter;
  DP.diameter = max(d1,max(d2,d3));
  return DP;
}
int main()
{
  node *root = build_tree();
  cout<<Optimized_Diameter(root).diameter;
}
