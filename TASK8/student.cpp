#include<iostream>
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
    cout.width(5);
    cout<<left<<"Rlno";
    cout.width(25);
    cout<<left<<"Name of Student";
    cout.width(5);
    cout<<left<<"M1";
    cout.width(5);
    cout<<left<<"M2";
    cout.width(5);
    cout<<left<<"M3";
    cout.width(5);
    cout<<left<<"Percentage"<<endl;
    for(int i=0;i<n;i++)
    {
        double total=Student[i].m1+Student[i].m2+Student[i].m3;
        cout.width(5);
        cout<<left<<Student[i].rollno;
        cout.width(25);
        cout<<left<<Student[i].name;
        cout.width(5);
        cout<<left<<Student[i].m1;
        cout.width(5);
        cout<<left<<Student[i].m2;
        cout.width(5);
        cout<<left<<Student[i].m3;
        cout.width(5);
        cout<<left<<(total/300.0)*100.0<<endl;
    }
    return 0;
}