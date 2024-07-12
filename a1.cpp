/*q1) write a program to accept basic salary from user and write function to calculate gross salary that includes basic salary, 50% DA, and 40% HRA of basic salary*/
#include <iostream>
using namespace std;
void calculateGrossSalary(int salary)
{
    float grossSalary = salary + (salary * 0.5) + (salary * 0.4);
    cout << "Gross salary: " << grossSalary << endl;
}
int main()
{
    int salary;
    cout << "Enter the basic salary: ";
    cin >> salary;
    calculateGrossSalary(salary);
    return 0;
    
}