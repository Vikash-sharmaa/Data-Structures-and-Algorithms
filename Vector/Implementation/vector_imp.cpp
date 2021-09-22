#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Vector
{
    T *a;
    int cs;
    int ms;
  public:
    Vector()
    {
      cs=0;
      ms=1;
      a=new T[ms];
    }

    void push_back(T data)
    {
      if(cs==ms)
      {
        T *oldArray = a;
        ms = 2 * ms;
        a=new T[ms];
        for(int i=0;i<cs;i++)
        {
          a[i]=oldArray[i];
        }
        delete [] oldArray;
      }
      a[cs]=data;
      cs++;
    }
    void pop_back()
    {
      cs--;
    }
    bool isEmpty()
    {
      return cs==0;
    }
    int front()
    {
      return a[0];
    }
    int back()
    {
      return a[cs-1];
    }
    int size()
    {
      return cs;
    }
    int capacity()
    {
      return ms;
    }
    T at(int i)
    {
      return a[i];
    }
    T operator [] (int i)
    {
      return a[i];
    }

};

int main()
{
  Vector <int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  cout<<v.size()<<endl;
  cout<<v.capacity()<<endl;
  cout<<v[2];
}
