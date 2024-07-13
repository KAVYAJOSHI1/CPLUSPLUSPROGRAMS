/*Write a program to create a class Student with data members name, roll_no, and marks.
Include member functions to input and display the details of the student. Create and display
the details of at least three students.*/
#include <iostream>
using namespace std;
class Student
{
    string name;
    int roll_no;
    int marks;
    public:
    void getdata()
    {
        cout<<"ENTER THE NAME OF THE STUDENT"<<endl;
        cin>>name;
        cout<<"ENTER THE ROLL NUMBER OF THE STUDENT"<<endl;
        cin>>roll_no;
        cout<<"ENTER THE MARKS OF THE STUDENT"<<endl;
        cin>>marks;
    }
    void display()
    {
        cout<<"THE NAME OF THE STUDENT IS "<<name<<endl;
        cout<<"THE ROLL NUMBER OF THE STUDENT IS "<<roll_no<<endl;
        cout<<"THE MARKS OF THE STUDENT IS "<<marks<<endl;  
    }

};
int main()
{
    Student s;
    for(int i=0;i<3;i++)
    {
      s.getdata();
      s.display();
    }
    return 0;
}