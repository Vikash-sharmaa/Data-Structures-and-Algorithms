#include<bits/stdc++.h>
using namespace std;
/*
input:-

4 4
1 2 3 4
12 13 14 5
11 16 15 6
10 9 8 7

*/

void wave_print(int a[][100],int m,int n)
{
  while(n!=0)
  {
    for(int row=0;row<m;row++)
    {
      cout<<a[row][n-1]<<" ";
    }
    for(int row=m-1;row>=0;row--)
    {
      cout<<a[row][n-2]<<" ";
    }
    n=n-2;
  }
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
  wave_print(a,m,n);
}
