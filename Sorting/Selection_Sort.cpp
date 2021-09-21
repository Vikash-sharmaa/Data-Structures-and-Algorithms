#include<bits/stdc++.h>
using namespace std;
/*

* repeatedly find the minimum element from the unsorted array and keep it in the begining .

*/
// O(n^2)
void selection_sort(vector<int> &a)
{
  int n = a.size();
  for(int i=0;i<n-1;i++)
  {
    int min = i;
    for(int j=i;j<n;j++)
    {
      if(a[j]<a[min])
      {
        min = j;
      }
    }
    swap(a[i],a[min]);
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
  selection_sort(v);
  for(int i=0;i<n;i++)
  {
    cout<<v[i]<<" ";
  }
}
