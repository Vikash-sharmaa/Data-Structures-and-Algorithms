#include<bits/stdc++.h>
using namespace std;

int linear_search(vector<int>&v,int to_be_search)
{
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i]==to_be_search)
    {
      return i+1;
    }
  }
  return -1;
}
int main()
{
  int n; cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  int to_be_search;cin>>to_be_search;
  cout<<linear_search(v,to_be_search);
}
