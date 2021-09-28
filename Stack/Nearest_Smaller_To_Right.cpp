#include<bits/stdc++.h>
using namespace std;

vector<int> nearest_smaller_to_right(int *a,int n)
{
  vector<int>result;
  stack<int>s;
  for(int i=n-1;i>=0;i--)
  {
    if(s.empty())
    {
      result.push_back(-1);
    }
    else if(s.top()<a[i])
    {
      result.push_back(s.top());
    }
    else
    {
      while(s.size()>0 && s.top()>=a[i])
      {
        s.pop();
      }
      if(s.size()==0)
      {
        result.push_back(-1);
      }
      else
      {
        result.push_back(s.top());
      }
    }
    s.push(a[i]);
  }
  reverse(result.begin(),result.end());
  return result;
}

int main()
{
  int n; cin>>n;
  int *a=new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  vector<int>result = nearest_smaller_to_right(a,n);
  for(auto x:result)
  {
    cout<<x<<" ";
  }
}
