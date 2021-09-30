#include<bits/stdc++.h>
using namespace std;


vector<int> nearest_smaller_to_right(vector<int>a,int n)
{
  int maxi = n;
  stack<pair<int,int>>s;
  vector<int>res;
  for(int i=n-1;i>=0;i--)
  {
    if(s.empty()) res.push_back(maxi);
    else if(s.top().first < a[i]) res.push_back(s.top().second);
    else
    {
      while(s.size()>0 && s.top().first >=a[i]) s.pop();
      if(s.size()==0) res.push_back(maxi);
      else res.push_back(s.top().second);
    }
    s.push({a[i],i});
  }
  reverse(res.begin(),res.end());
  return res;
}

vector<int> nearest_smaller_to_left(vector<int>a,int n)
{
  vector<int>res;
  stack<pair<int,int>>s;
  for(int i=0;i<n;i++)
  {
    if(s.empty()) res.push_back(-1);
    else if(s.top().first < a[i]) res.push_back(s.top().second);
    else
    {
      while(s.size() > 0 && s.top().first >= a[i]) s.pop();
      if(s.size()==0) res.push_back(-1);
      else res.push_back(s.top().second);
    }
    s.push({a[i],i});
  }
  return res;
}

int maximum_area_histogram(vector<int>a,int n)
{
  vector<int>right = nearest_smaller_to_right(a,n);
  vector<int>left = nearest_smaller_to_left(a,n);
  vector<int>width(n);
  vector<int>areas(n);
  for(int i=0;i<n;i++)
  {
    width[i]=right[i]-left[i]-1;
  }
  for(int i=0;i<n;i++)
  {
    areas[i]=a[i]*width[i];
  }
  int result= *max_element(areas.begin(),areas.end());
  return result;
}

int maximum_area(int n,int m,vector<vector<int>>a)
{
  vector<int> v;
  for(int j=0;j<m;j++)
  {
    v.push_back(a[0][j]);
  }
  int maxii = maximum_area_histogram(v,v.size());
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      v[j] = a[i][j] + v[j];
    }
    maxii = max(maxii,maximum_area_histogram(v,v.size()));
  }
  return maxii;
}

int main()
{
  int n,m;
  cin>>n>>m;
  vector<vector<int>> a;
  for(int i=0;i<n;i++)
  {
    vector<int>small;
    for(int j=0;j<m;j++)
    {
      int temp; cin>>temp;
      small.push_back(temp);
    }
    a.push_back(small);
  }
  cout<<maximum_area(n,m,a);
}
