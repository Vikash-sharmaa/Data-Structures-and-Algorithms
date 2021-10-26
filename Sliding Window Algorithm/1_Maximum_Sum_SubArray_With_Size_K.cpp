#include<bits/stdc++.h>
using namespace std;

int max_sum(int n,int* a,int k)
{
  int i=0,j=0,sum=0,mx=INT_MIN;
  while(j<n)
  {
    sum+=a[j];
    if(j-i+1<k) j++;
    else if(j-i+1==k)
    {
      mx=max(mx,sum);
      sum-=a[i];
      i++;
      j++;
    }
  }
  return mx;
}

int main()
{
  int n;cin>>n;
  int *a=new int[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int k; cin>>k;
  cout<<max_sum(n,a,k);
}
