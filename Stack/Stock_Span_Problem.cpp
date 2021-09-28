#include<bits/stdc++.h>
using namespace std;

//store index of greater element in vector
//store pair of greater element and its index in  stack

vector<int> stock_span(int *a)
{
  vector<int> res;
  stack<pair<int,int>> s;
  for(int i=0;i<7;i++)
  {
    if(s.empty()) res.push_back(-1);
    else if(s.top().first > a[i]) res.push_back(s.top().second);
    else
    {
      while(s.size()>0 && s.top().first <= a[i])
      {
        s.pop();
      }
      if(s.size()==0) res.push_back(-1);
      else res.push_back(s.top().second);
    }
    s.push({a[i],i});
  }
  for(int i=0;i<7;i++)
  {
    res[i]=i-res[i];
  }
  return res;
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
