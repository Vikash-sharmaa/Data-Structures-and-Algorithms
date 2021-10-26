#include<bits/stdc++.h>
using namespace std;

int binarySearchReverse(int n,int target,int* a)
{
  int start=0,end=n-1;
  while(start<=end)
  {
    int mid=start + (end-start)/2;
    if(a[mid]==target) return mid;
    else if(a[mid]>target) start=mid+1;
    else end=mid-1;
  }
  return -1;
}

int main()
{
  int n; cin>>n;
  int* a=new int[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int target; cin>>target;
  cout<<binarySearchReverse(n,target,a);
}
