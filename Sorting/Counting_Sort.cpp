#include<bits/stdc++.h>
using namespace std;
/*


*/
//
void counting_sort(vector<int> &a)
{
  int n = a.size();
  int range = *max_element(a.begin(),a.end());
  int frquency[range+1]={0};
  for(int i=0;i<n;i++)
  {
    ++frquency[a[i]];
  }
  int ct =0;
  for(int i=0;i<range+1;i++)
  {
    while(frquency[i]!=0)
    {
      a[ct++] = i;
      frquency[i]--;
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
  counting_sort(v);
  for(int i=0;i<n;i++)
  {
    cout<<v[i]<<" ";
  }
}
