#include<bits/stdc++.h>
using namespace std ;

int reverse_integer(stack<int>s,int n)
{
  while(n)
  {
    s.push(n%10);
    n/=10;
  }
  int rev=0,i=1;
  while(!s.empty())
  {
    rev=rev+(s.top()*i);
    s.pop();
    i=i*10;
  }
  return rev;
}

int main()
{
  stack<int>s;
  int n; cin>>n;
  cout<<reverse_integer(s,n);
}
