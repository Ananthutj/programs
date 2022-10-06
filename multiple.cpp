#include<iostream>
using namespace std;

class Add
{
    private:
    int a,b;
    public:
    void input()
    {
        cout<<"Enter two numbers:"<<endl;
        cin>>a>>b;
    }
    void show()
    {
        cout<<"Sum of a and b is:"<<a+b<<endl;
    }
};

class Sub
{
    private:
    int a,b;
    public:
    void input1()
    {
        cout<<"Enter two numbers:"<<endl;
        cin>>a>>b;
    }
    void show1()
    {
        cout<<"Subtraction of a and b is:"<<a-b<<endl;
    }
};

class derive:public Add,public Sub
{
    private:
    int a,b;
    public:
    void input2()
    {
        cout<<"Enter two numbers:"<<endl;
        cin>>a>>b;
    }
    void show2()
    {
        
        cout<<"Multiplication of a and b is:"<<a*b<<endl;
    }
};

int main()
{
    derive ob;
    ob.input2();
    ob.show2();
    ob.input1();
    ob.show1();
    ob.input();
    ob.show();
    return 0;
}