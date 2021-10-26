#include<bits/stdc++.h>
using namespace std;

void Print_Subarrrays(vector<int>v)
{
  int n=v.size();
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      for(int k=i;k<=j;k++)
      {
        cout<<v[k]<<" ";
      }
      cout<<endl;
    }
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
  Print_Subarrrays(v);
}
