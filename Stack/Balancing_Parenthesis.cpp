#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string s)
{
  stack<char>stackk;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='[' || s[i]=='{' || s[i]=='(')
        {
            stackk.push(s[i]);
        }
        else
        {
            if(stackk.empty() || (s[i]==']' && stackk.top()!='[') || (s[i]==')' && stackk.top()!='(') || (s[i]=='}' && stackk.top()!='{'))
            {
                return false;
            }
            else
            {
                stackk.pop();
            }
        }
    }
    return stackk.empty();
}

int main()
{
  string s; cin>>s;
  cout<<isBalanced(s);
}
