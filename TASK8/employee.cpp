#include <iostream>
#include <iomanip> // for setw, setfill, and setprecision
using namespace std;

struct Employee {
    string name;
    double salary;
};

// Function to display employee data
void displayEmployeeTable(Employee employees[], int n) {
    cout << left << setw(20) << "Name" << "Salary" << endl; // Table header
    
    for (int i = 0; i < n; i++) {
        cout << left << setw(20) << employees[i].name 
             << setfill('.') << right << setw(10) 
             << fixed << setprecision(2) << employees[i].salary << endl;
    }
}

int main() {
    int n;
    
    cout << "Enter the number of employees: ";
    cin >> n;
    
    Employee employees[n];
    
    // Input employee data
    for (int i = 0; i < n; i++) {
        cout << "Enter name of employee " << i + 1 << ": ";
        cin >> employees[i].name;
        cout << "Enter salary of employee " << i + 1 << ": ";
        cin >> employees[i].salary;
    }
    
    // Display employee table
    displayEmployeeTable(employees, n);
    
    return 0;
}
