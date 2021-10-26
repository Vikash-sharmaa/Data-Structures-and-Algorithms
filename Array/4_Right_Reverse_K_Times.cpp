#include<bits/stdc++.h>
using namespace std;

// O(n)   O(1)
void rotate_k_times(int n,int k,int *a)
{
  reverse(a,a+n-k);
  reverse(a+n-k,a+n);
  reverse(a,a+n);
}

int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n,k; cin>>n>>k;
    int *a=new int[n];
    for(int i=0;i<n;i++) cin>>a[i];
    rotate_k_times(n,k,a);
    for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
  }
}
