#include<iostream>
using namespace std;
#define max 1000

class stack
{
private:
    int top;
public:
    int a[max];
    bool push(int d);
    int pop();
    int peek();
    bool isEmpty();
    stack()
    {
        top=-1;
    }
};

bool stack::push(int d)
{
    if(top>=max)
    {
        cout<<"STACK OVERFLOW"<<endl;
        return false;
    }
    else
    {
       a[++top]=d;
       cout<<d<<" Successfully Pushed"<<endl;
       return true;
    }
}

int stack::pop()
{
    if(top<0)
    {
        cout<<"STACK UNDERFLOW"<<endl;
        return 0;
    }
    else
    {
        int x=a[top--];
        return x;
    }
}

int stack::peek()
{
    if(top<0)
    {
        cout<<"STACK IS EMPTY"<<endl;
        return 0;
    }
    else
    {

        int x=a[top];
        return x;
    }
}

bool stack::isEmpty()
{
    if(top<0)
    {
        return true;
    }
    else
    {
        return false;
    }
}



int main()
{    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";

    return 0;
}
