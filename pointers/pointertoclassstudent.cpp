//Create a class student having private members marks,name and public members rollno,getdata(),printdata().
//Demonstrate concept of pointers to class members for array of 3 objects.

#include <iostream>
using namespace std;
class student
{
    int marks;
    string name;
    public:
    int rollno;
    void getdata()
    {
        cout<<"Enter the name of the student"<<endl;
        cin>>name;
        cout<<"Enter the roll number of the student"<<endl;
        cin>>rollno;
        cout<<"Enter the marks of the student"<<endl;
        cin>>marks;
    }
    void printdata()
    {
        cout<<"The name of the student is "<<name<<endl;
        cout<<"The roll number of the student is "<<rollno<<endl;
        cout<<"The marks of the student is "<<marks<<endl;
    }
};

int main()
{
    student s[3];
    //using pointers
    student *ptr;
    ptr=s;
    for(int i=0;i<3;i++)
    {
        ptr->getdata();
        ptr->printdata();
        ptr++;
    }
}