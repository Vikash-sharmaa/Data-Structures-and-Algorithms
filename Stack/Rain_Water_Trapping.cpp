#include<bits/stdc++.h>
using namespace std;

int water_trapped(vector<int>v)
{
  int n=v.size();
  vector<int>mxl(n);
  vector<int>mxr(n);
  mxl[0]=v[0];
  for(int i=1;i<n;i++)
  {
    mxl[i]=max(mxl[i-1],v[i]);
  }
  mxr[n-1]=v[n-1];
  for(int i=n-2;i>=0;i--)
  {
    mxr[i]=max(mxr[i+1],v[i]);
  }
  vector<int>water(n);
  for(int i=0;i<n;i++)
  {
    water[i]=min(mxl[i],mxr[i]) - v[i];
  }
  int total_water_trapped = 0;
  for(auto x:water)
  {
    total_water_trapped +=x;
  }
  return total_water_trapped;
}

int main()
{
  int n; cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  cout<<water_trapped(v);
}
