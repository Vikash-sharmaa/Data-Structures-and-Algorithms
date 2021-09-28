#include<bits/stdc++.h>
using namespace std;

vector<int> stock_span(int *a)
{
  vector<pair<int,int>>res;
  vector<int>result;
  stack<pair<int,int>>s;
  for(int i=0;i<7;i++)
  {
    if(s.empty()) res.push_back({-1,-1});
  }
  return result;
}

int main()
{
  int *a=new int[7];
  for(int i=0;i<7;i++)
  {
    cin>>a[i];
  }
  vector<int>res = stock_span(a);
  for(auto x:res)
  {
    cout<<x<<" ";
  }
}
