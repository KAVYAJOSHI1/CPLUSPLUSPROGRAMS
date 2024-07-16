//Base class student ,inherit is cse student .
#include <iostream.h>
using namespace std;
class student
{
    int roll_no;
    char name[20];
    public:
    void getdata1()
    {
        cout<<"ENTER THE NAME OF THE STUDENT"<<endl;
        cin>>name;
        cout<<"ENTER THE ROLL NUMBER OF THE STUDENT"<<endl;
        cin>>roll_no;
    }
    void display1()
    {
        cout<<"THE NAME OF THE STUDENT IS "<<name<<endl;
        cout<<"THE ROLL NUMBER OF THE STUDENT IS "<<roll_no<<endl;
    }
};
class cse:public student
{
    int marks;
    public:
    void getdata2()
    {
        cout<<"ENTER THE MARKS OF THE STUDENT"<<endl;
        cin>>marks;
    }
    void display2()
    {
        cout<<"THE MARKS OF THE STUDENT IS "<<marks<<endl;
    }
};
int main()
{
    student s;
    cse c;
    
    c.getdata1();
    
    c.display1();
    
    c.getdata2();
    
    c.display2();
    
    return 0;
}
