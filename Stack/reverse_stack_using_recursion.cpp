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

void reverse(stack<int> &s)
{
  if(s.empty())
  {
    return;
  }
  int temp=s.top();
  s.pop();
  reverse(s);
  pushBottom(s,temp);
}

int main()
{
  stack<int>s;
  s.push(1);
  s.push(2);
  s.push(3);
  reverse(s);
  cout<<s.top();
}
