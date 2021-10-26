#include<bits/stdc++.h>
using namespace std;

int facto(int n)
{
  return n==0 ? 1 : n*facto(n-1);
}
int main()
{
  int n; cin>>n;
  cout<<facto(n);
}
