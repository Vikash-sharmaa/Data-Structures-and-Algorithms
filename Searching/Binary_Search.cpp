//Always works for sorted arrays
#include<bits/stdc++.h>
using namespace std;
// iterative approach
int search(vector<int>& nums, int target)
    {
      int start=0,end=nums.size()-1;
      while(start<=end)
      {
          int mid= (start+end)/2;
          if(nums[mid]==target)
          {
              return mid;
          }
          else if(target<nums[mid])
          {
              end=mid-1;
          }
          else
          {
              start=mid+1;
          }
      }
        return -1;
  }
// recursive approach
int binary_search(int start,int end,vector<int>v,int target)
{
  if(start>end)
  {
    return -1;
  }
  int mid = (start+end)/2;
  if(v[mid]==target)
  {
     return mid+1;
  }
  else if(target>v[mid])
  {
    return binary_search(mid+1,end,v,target);
  }
  else
  {
    return binary_search(start,mid-1,v,target);
  }
}

int main()
{
  int n; cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  int target; cin>>target;
  cout<<binary_search(0,n-1,v,target);
}
