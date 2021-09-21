/*

Given a long route containing N S E W directions , find the shortest path to reach the location .
input:-   SNNNEWE
output:- NNE

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s; cin>>s;
  int x=0,y=0;
  for(auto i:s)
  {
    if(i=='N') y++;
    else if(i=='S') y--;
    else if(i=='E') x++;
    else x--;
  }
  if(x>=0 && y>=0)
  {
    while(y--)
    {
      cout<<'N';
    }
    while(x--)
    {
      cout<<'E';
    }
  }
  else if(x<=0 && y>=0)
  {
    while(y--)
    {
      cout<<'N';
    }
    while(x++)
    {
      cout<<'W';
    }
  }
    else if(x<=0 && y<=0)
    {
      while(y++)
      {
        cout<<'S';
      }
      while(x++)
      {
        cout<<'W';
      }
    }
   else if(x>=0 && y<=0)
   {
     while(y++)
     {
       cout<<'S';
     }
     while(x++)
     {
       cout<<'E';
     }
   }
}
