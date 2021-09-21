#include<bits/stdc++.h>
using namespace std;

void Reverse_It(vector<int>&v)
{
  int i=0,j=v.size()-1;
  while(i<j)
  {
    swap(v[i++],v[j--]);
  }
}

int main()
{
  int n; cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  Reverse_It(v);
  for(int i=0;i<n;i++)
  {
    cout<<v[i]<<" ";
  }
}
