#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    string name;
    int employee_id;
    float salary;
    
    void getdata()
    {
        cout << "Enter the name of the employee: ";
        cin >> name;
        cout << "Enter the employee ID: ";
        cin >> employee_id;
        cout << "Enter the salary: ";
        cin >> salary;
    }
};

class Developer : public Account
{
public:
    int bonus;
    
    void calculate_bonus()
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
    
    void display()
    {
        cout << "The name of the employee is: " << name << endl;
        cout << "The employee ID of the employee is: " << employee_id << endl;
        cout << "The total annual income of the employee is: " << salary + bonus << endl;
    }
};

int main()
{
    Developer d1;
    d1.getdata();
    d1.calculate_bonus();
    d1.display();
    
    return 0;
}
