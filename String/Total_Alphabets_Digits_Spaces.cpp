#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s; getline(cin,s);
  int alpha = 0 , digits = 0 , space = 0;
  for(auto x:s)
  {
    if(x>='0' && x<='9')
    {
      digits++;
    }
    else if((x>='a' && x<='z') || (x>='A' && x<='Z'))
    {
      alpha++;
    }
    else if(x==' ')
    {
      space++;
    }
  }
  cout<<"Alphabets = "<<alpha<<endl;
  cout<<"Digits = "<<digits<<endl;
  cout<<"Spaces = "<<space<<endl;
}
