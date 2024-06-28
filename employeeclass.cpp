//Class employee having members name,salary,age having member functions setdata and displaydata. create 2 objects

#include <iostream>
using namespace std;
class employee
{
    private:
    string name;
    int salary;
    int age;
    public:
    void setdata()
    {
        
        cout<<"Enter name,salary,age of employee "<<endl;
        cin>>name>>salary>>age;
    }
    void displaydata()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main()
{
    employee e1,e2;
    e1.setdata();
    e1.displaydata();
    e2.setdata();
    e2.displaydata();
}