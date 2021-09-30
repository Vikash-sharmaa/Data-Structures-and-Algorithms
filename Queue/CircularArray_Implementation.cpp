#include<iostream>
# define max 6
using namespace std;
class queue
{
private:
    int a[max];
    int f,r;
    int count;
public:
    void enqueue(int d);
    void dequeue();
    int showfront();
    int showrear();
    int size();
    bool isEmpty();
    void display();

    queue()
    {
        f=r=-1;
        count=0;
    }
};

bool queue::isEmpty()
{
    return (f==-1 && r==-1);
}

void queue::enqueue(int d)
{
    if((r+1)%max==f)
    {
        cout<<"OVERFLOW"<<" ";
    }
    else
    {
        if(f==-1)
        {
            f=0;
        }
        else
        {
            r=(r+1)%max;
            a[r]=d;
        }
    count++;
    }

}

void queue::dequeue()
{
    if(isEmpty())
    {
        cout<<"UNDERFLOW"<<endl;
    }
    else
    {
       if(f==r)
       {
           f=r=-1;
       }
       else
       {
        f=(f+1)%max;
       }
       count--;
    }
}
void queue::display()
{
    if(isEmpty())
    {
        cout<<"EMPTY"<<endl;
    }
    else
    {
       if(f<=r)
       {
           for(int i=f;i<=r;i++)
           {
               cout<<a[i]<<"  ";
           }
       }
       else
       {
           int i=f;
           while(i<max)
           {
               cout<<a[i]<<" ";
               i++;
           }
           i=0;
           while(i<r)
           {
               cout<<a[i]<<" ";
               i++;
           }
       }
    }
}

int main()
{
    queue q;
    for(int i=1;i<=4;i++)
    {
        q.enqueue(i);
    }
    q.display();
    return 0;
}
