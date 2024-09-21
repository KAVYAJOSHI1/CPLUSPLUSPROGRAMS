#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
    int rollno;
    string name;
    double m1;
    double m2;
    double m3;
};
int main()
{
    int n;
    cout<<"Number of student records: ";
    cin>>n;
    student Student[n];
    cout<<"Enter student records: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Student "<<i+1<<":"<<endl;
        cout<<"Enter RollNo: ";
        cin>>Student[i].rollno;
        cout<<"Enter Name: ";
        cin>>Student[i].name;
        cout<<"Enter marks of subject 1: ";
        cin>>Student[i].m1;
        cout<<"Enter marks of subject 2: ";
        cin>>Student[i].m2;
        cout<<"Enter marks of subject 3: ";
        cin>>Student[i].m3;
    }
    cout<<left<<setw(5)<<"Rlno"<<setw(25)<<"Name of Student"<<setw(5)<<"M1"<<setw(5)<<"M2"<<setw(5)<<"M3"<<setw(5)<<"Percentage"<<endl;
    for(int i=0;i<n;i++)
    {
        double total=Student[i].m1+Student[i].m2+Student[i].m3;
        cout<<left<<setw(5)<<Student[i].rollno<<setw(25)<<Student[i].name<<setw(5)<<Student[i].m1<<setw(5)<<Student[i].m2<<setw(5)<<Student[i].m3<<setw(5)<<(total/300.0)*100.0<<endl;
    }
    return 0;
}