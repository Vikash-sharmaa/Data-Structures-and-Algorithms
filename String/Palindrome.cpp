#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
  int i=0,j=s.length()-1;
  while(i<j)
  {
    if(s[i++]!=s[j--])
    {
      return false;
    }
  }
  return true;
}
int main()
{
  string s; cin>>s;
  cout<<isPalindrome(s);
}
