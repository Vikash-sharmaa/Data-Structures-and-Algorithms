#include<bits/stdc++.h>
using namespace std;
/*
search an element in a 2d array where elements are columnwise and rowwise sorted .
input:-

4 4
10 20 30 40
15 25 35 45
27 29 37 48
32 33 39 50

to_be_searched = 33

*/

pair<int,int> stairCase(int a[100][100],int m,int n,int target)
{
  int i=0,j=n-1;
  if(target < a[0][0] || target > a[m-1][n-1]) return {-1,-1};
  while(i<m && j>=0)
  {
    if(a[i][j] == target)
    {
      return {i,j};
    }
    else if(a[i][j] > target)
    {
      j--;
    }
    else
    {
      i++;
    }
  }
  return {-1,-1};
}

int main()
{
  int m,n;cin>>m>>n;
  int a[100][100];
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  int target; cin>>target;
  pair<int,int> res = stairCase(a,m,n,target);
  cout<<res.first<<" "<<res.second;
}
