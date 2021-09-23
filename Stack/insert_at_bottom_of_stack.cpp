#include<bits/stdc++.h>
using namespace std;

void pushBottom(stack<int> &s,int k)
{
  if(s.empty())
  {
    s.push(k);
    return ;
  }
  int front = s.top();
  s.pop();
  pushBottom(s,k);
  s.push(front);
}

int main()
{
  stack<int>s;
  s.push(1);
  s.push(2);
  s.push(3);
  pushBottom(s,13);
  pushBottom(s,23);
  while(s.size()!=1)
  {
    s.pop();
  }
  cout<<s.top();
}
