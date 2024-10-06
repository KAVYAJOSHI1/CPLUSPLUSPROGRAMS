#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
    fstream file;
    file.open("Employee.txt",ios::out);
    int Emp_code;
    string Emp_name;
    string designation;
    int salary;
    file<<setw(15)<<left<<"EMPLOYEE CODE"<<setw(15)<<left<<"EMPLOYEE NAME"<<setw(15)<<left<<"DESIGNATION"<<setw(15)<<right<<"SALARY"<<endl;
    for(int i=0;i<5;i++)
    {
       cout<<"Enter employee code"<<endl;
       cin>>Emp_code;
       cout<<"Enter employee name"<<endl;
       cin>>Emp_name;
       cout<<"Enter employee designation"<<endl;
       cin>>designation;
       cout<<"Enter employee salary"<<endl;
       cin>>salary;
       file<<setw(15)<<left<<Emp_code<<setw(15)<<left<<Emp_name<<setw(15)<<left<<designation<<setw(15)<<right<<salary<<endl;
    }
    file.close();

    file.open("Employee.txt",ios::in);
    string line;
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();
}