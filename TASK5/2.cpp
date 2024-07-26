/*2. Demonstrate the concept of multilevel inheritance. Create a class Student with
data members enrol_no, name, class and memeber functions for getting the
data and display data. Derive a class Test from Student with members as
marks of five subjects, functions for getting the data and display. Derive class
Result from Test with total and percentage as members and calculate() function
as member function to calculate percentage of student. In main create the
object and display all the student details.*/

#include<iostream>
using namespace std;
class Student{
    public:
    int enrol_no;
    string name;
    int class;
    void getdata()
    {
        cout<<"ENTER THE NAME OF THE STUDENT"<<endl;
        cin>>name;
        cout<<"ENTER THE ROLL NUMBER OF THE STUDENT"<<endl;
        cin>>enrol_no;
        cout<<"ENTER THE CLASS OF THE STUDENT"<<endl;
        cin>>class;
    }
};

class Test:public Student
{
    public: