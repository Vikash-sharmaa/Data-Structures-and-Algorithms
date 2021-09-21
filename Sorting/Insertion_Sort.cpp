#include<bits/stdc++.h>
using namespace std;
/*
* make 2 parts sorted and unsorted
* take each element from unsorted part and try to keep it in its right position in sorted part

5 4 3 2 1
i=1 j=0 key =4
5 5 3 2 1
i=1 j=-1 key =4
4 5 3 2 1
i=2 j=1 key =3
4 5 5 2 1
i=2 j=0 key =3
4 4 5 2 1
i=2 j=-1 key =3
3 4 5 2 1
.
.
.
1 2 3 4 5
*/
// O(n^2)
void insertion_sort(vector<int> &v)
{
  int n = v.size();
  for(int i=1;i<n;i++)
  {
    int key = v[i];
    int j=i-1;
    while(j>=0 && v[j]>key)
    {
      v[j+1]=v[j];
      j--;
    }
    v[j+1]=key;
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
  insertion_sort(v);
  for(int i=0;i<n;i++)
  {
    cout<<v[i]<<" ";
  }
}
