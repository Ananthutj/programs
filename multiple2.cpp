#include<iostream>
using namespace std;

class Employee
{
    public:
    char name[100];
    int emp_no;
    int payrate;
    Employee(char n,int e,int p)
    {
        name=n;
        emp_no=e;
        payrate=p;
    }
    void pay()
    {
        cout<<"Salary is:"<<7*8*payrate<<endl;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Employee no:"<<emp_no<<endl;
        cout<<"Pay rate:"<<payrate<<endl;
    }
};

class Manager:public Employee{
    public:
    bool is_salarised;
    Manager(char n,int e,int p,bool a):Employee(n,e,p)
    {
        is_salarised=a;
    }
    void pay()
    {
        if(is_salarised)
        {
            cout<<"Salary is:"<<7*8*payrate<<endl;
        }
        else
        {
            int hours;
            cout<<"Enter the no of days worked:"<<endl;
            cin>>hours;
            cout<<"salary is:"<<hours*payrate<<endl;
        }
    }
};

class Supervisor:public Employee
{
    public:
    string department;
    Supervisor(char n,int e,int p,string d):Employee(n,e,p)
    {
        department=d;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Employee no:"<<emp_no<<endl;
        cout<<"Pay rate:"<<payrate<<endl;
        cout<<"Department:"<<department<<endl;
    }
};

int main()
{
    Manager m("harry", 13 , 1300, 1);
    Supervisor s("tom" , 14 , 2000 , "it" );
    m.display();
    m.pay();

    s.display();
    s.pay();
    return 0;
}