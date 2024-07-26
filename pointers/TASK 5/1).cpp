/*1. Demonstrate the concept of single inheritance. Create a class account with
members name, employee_id and salary. Create a derive class developers with
member bonus. The company give bonus of Rs. 15000 to each developer with
salary greater than 500000 and Rs. 8000 to others. In main create the object
of developer and display the name, employee_id and total annual income of
that employee including bonus.*/
#include <iostream>
using namespace std;

class account
{

public:
string name;
int employee_id;
int salary;
void getdata()
{
    cout << "ENTER THE NAME OF THE EMPLOYEE" << endl;
    cin >> name;
    cout << "ENTER THE EMPLOYEE ID" << endl;
    cin >> employee_id;
    cout << "ENTER THE SALARY" << endl;
    cin >> salary;
}
};
class developer : public account
{
    public :
    int bonus;
    void getdata()
    {
        if (salary > 500000)
        {
            bonus = 15000;
        }
        else
        {
            bonus = 8000;
        }
    }
    
};
int main()
{
    developer d1;
    d1.getdata();
    cout << "THE NAME OF THE EMPLOYEE IS " << d1.name << endl;
    cout << "THE EMPLOYEE ID OF THE EMPLOYEE IS " << d1.employee_id << endl;
    cout << "THE TOTAL ANNUAL INCOME OF THE EMPLOYEE IS " << d1.salary + d1.bonus << endl;
}
