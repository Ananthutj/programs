#include<iostream>
using namespace std;

class Person
{
    private:
    int id;
    char name[100];
    public:
    void get_p()
    {
        cout<<"Enter the id:"<<endl;
        cin>>id;
        cout<<"Enter the name:"<<endl;
        cin>>name;
    }
    void display_p()
    {
        cout<<"ID :"<<id<<endl;
        cout<<"Name:"<<name<<endl;
    }
};

class Student:public Person
{
    private:
    int sem;
    public:
    void get_s()
    {
        Person::get_p();
        cout<<"Enter the semester:"<<endl;
        cin>>sem;
    }
    void display_s()
    {
        Person::display_p();
        cout<<"Semester:"<<sem<<endl;
    }
};

int main()
{
    Student s;
    s.get_s();
    s.display_s();
    return 0;
}