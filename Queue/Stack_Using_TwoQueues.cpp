#include<bits/stdc++.h>
using namespace std;

class Stack
{
  queue<int>q1,q2;
public:
  void pushStack(int data)
  {
    if(!q1.empty())
    {
      q1.push(data);
    }
    else
    {
      q2.push(data);
    }
  }
  void popStack()
  {
    if(q1.empty())
    {
      while(q2.size()!=1)
      {
        int front = q2.front();
        q2.pop();
        q1.push(front);
      }
      q2.pop();
    }
    else
    {
      while(q1.size()!=1)
      {
        int front = q1.front();
        q1.pop();
        q2.push(front);
      }
      q1.pop();
    }
  }
  int top()
  {
    if(q1.empty())
    {
      while(q2.size()!=1)
      {
        int front = q2.front();
        q2.pop();
        q1.push(front);
      }
      int front=q2.front();
      q2.pop();
      q1.push(front);
      return front;
    }
    else
    {
      while(q1.size()!=1)
      {
        int front = q1.front();
        q1.pop();
        q2.push(front);
      }
      int front=q1.front();
      q1.pop();
      q2.push(front);
      return front;
    }
  }
};

int main()
{
  Stack s;
  s.pushStack(1);
  s.pushStack(2);
  s.pushStack(3);
  s.pushStack(4);
  cout<<s.top()<<endl;
  s.popStack();
  cout<<s.top();
}
