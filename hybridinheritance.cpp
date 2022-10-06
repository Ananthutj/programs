#include<iostream>
using namespace std;

class Student
{
    public:
    int id;
    char name[100];
    void getdata();
};

void Student::getdata()
{
    cout<<"Enter the student id and name:"<<endl;
    cin>>id>>name;
}

class mark:public Student
{
    public:
    int maths,phy,che;
    void getdata1();
};
void mark::getdata1()
{
    cout<<"Enter the marks of 3 subjects:"<<endl;
    cin>>maths>>phy>>che;
}

class Sports
{
    public:
    int spt;
    void getdata2();
};
void Sports::getdata2()
{
    cout<<"Enter the marks of sports:"<<endl;
    cin>>spt;
}
class result:public mark,public Sports
{
    public:
    int total;
    void display();
};

void result::display()
{
    total=maths+phy+che+spt;
    cout<<"Total:"<<total<<endl;
}

int main()
{
    result r1;
    r1.getdata();
    r1.getdata1();
    r1.getdata2();
    r1.display();
    return 0;
}



