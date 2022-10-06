#include<iostream>
using namespace std;

class A
{
    public:
    int a,b;
    void get()
    {
        cout<<"Enter the two numbers:"<<endl;
        cin>>a>>b;
    }
};

class B:public A{
    public:
    void product()
    {   get();
        cout<<"Product:"<<a*b<<endl;
    }
};

class C:public A
{
    public:
    void sum()
    {
        cout<<"Sum is:"<<a+b<<endl;
    }
};

int main()
{
    B o1;
    C o2;
    o1.product();
    o2.get();
    o2.sum();
    return 0;
}