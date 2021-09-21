#include<bits/stdc++.h>
using namespace std;
// O(n^3)
int Largest_Subarrray_Sum_BruteForce(vector<int>v)
{
  int n=v.size();
  int largest_till_now=0;
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      int current_subarray_sum = 0;
      for(int k=i;k<=j;k++)
      {
        current_subarray_sum+=v[k];
      }
      largest_till_now=max(largest_till_now,current_subarray_sum);
    }
  }
  return largest_till_now;
}

// O(n^2)
int Largest_Subarrray_Sum_PrefixSum(vector<int>v)
{
  int n= v.size()-1;
  vector<int>prefix(n,0);
  prefix[0]=v[0];
  for(int i=1;i<n;i++)
  {
    prefix[i] = prefix[i-1] + v[i];
  }
  int largest_till_now = 0;
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      int current_subarray_sum = i>0 ? prefix[j]-prefix[i-1] : prefix[j];
      largest_till_now = max(largest_till_now , current_subarray_sum);
    }
  }
  return largest_till_now;
}

// O(n^3)
int Largest_Subarrray_Sum_KadaneAlgorithm(vector<int>v)
{
  int current_subarray_sum=v[0],largest_till_now=v[0];
  for(int i=1;i<v.size();i++)
  {
    current_subarray_sum =  max(current_subarray_sum+v[i] , v[i]);
    largest_till_now = max(largest_till_now , current_subarray_sum);
  }
  return largest_till_now;
}

int main()
{
  int n; cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  cout<<Largest_Subarrray_Sum_BruteForce(v)<<endl;
  cout<<Largest_Subarrray_Sum_PrefixSum(v)<<endl;
  cout<<Largest_Subarrray_Sum_KadaneAlgorithm(v)<<endl;
}
