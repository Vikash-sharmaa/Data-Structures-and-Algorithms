#include<bits/stdc++.h>
using namespace std;

stack<int>s,ss;
void push(stack<int>& s,int a)
{
  s.push(a);
  if(ss.size()==0 || ss.top()>=a)
  {
    ss.push(a);
  }

}

void pop(stack<int>& s)
{
  int a=s.top();
  s.pop();
  if(a==ss.top())
  {
    ss.pop();
  }
}

bool isFool(stack<int>&s,int n)
{
  return s.size()==n ;
}

bool isEmpty(stack<int>& s)
{
  return s.size()==0;
}

void getMin(stack<int>& s)
{
  return ss.size()==0 ? -1 : ss.top();
}

int main()
{
  int n,a;
  cin>>n;
  while(!isEmpty(s))
  {
    pop(s);
  }
  while(!isFull(s,n))
  {
    cin>>a;
    push(s,a);
  }
  cout<<getMin(s)<<endl;
}
