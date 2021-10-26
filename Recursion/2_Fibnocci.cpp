#include<bits/stdc++.h>
using namespace std;

string reverse_it(string s)
{
  int i=0;
  int j=s.length()-1;
  while(i<j)
  {
    swap(s[i++],s[j--]);
  }
  return s;
}
int main()
{
  string s; cin>>s;
  cout<<reverse_it(s);
}
