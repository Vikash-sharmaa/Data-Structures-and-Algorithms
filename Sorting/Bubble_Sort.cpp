#include<bits/stdc++.h>
using namespace std;

/*

* in each iteration we found out the largest element and try to put it in its right place

*/
// O(n^2)
void bubble_sort(vector<int> &v)
{
  int n= v.size();
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(v[j]>v[j+1])
      {
        swap(v[j],v[j+1]);
      }
    }
  }
}


// Best Case Time Complexity - O(n)

void optimized_bubble_sort(vector<int>v)
{
  int n= v.size(v;
  bool swapped;
  for(int i=0;i<n-1;i++)
  {
    swapped = false;
    for(int j=0;j<n-i-1;j++)
    {
      if(v[j]>v[j+1])
      {
        swap(v[j],v[j+1]);
        swapped=true;
      }
    }
    if(swapped==false)
    {
      break ;
    }
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
  bubble_sort(v);
  for(int i=0;i<n;i++)
  {
    cout<<v[i]<<" ";
  }
}
