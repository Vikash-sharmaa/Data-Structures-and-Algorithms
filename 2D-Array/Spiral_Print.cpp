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

void spiral_print(int a[100][100],int m,int n)
{
  int startRow = 0,startColumn=0,endRow=m-1,endColumn=n-1;
  while(startRow<=endRow && startColumn<=endColumn)
  {
    for(int col=startColumn;col<=endColumn;col++)
    {
      cout<<a[startRow][col]<<" ";
    }

    for(int row=startRow+1;row<=endRow;row++)
    {
      cout<<a[row][endColumn]<<" ";
    }
    for(int col=endColumn-1;col>=startColumn;col--)
    {
      if(startRow==endRow)
      {
        break;
      }
      cout<<a[endRow][col]<<" ";
    }
    for(int row=endRow-1;row>startRow;row--)
    {
      if(startColumn==endColumn)
      {
        break;
      }
      cout<<a[row][startColumn]<<" ";
    }
    startRow++;
    endRow--;
    startColumn++;
    endColumn--;
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
  spiral_print(a,m,n);
}
