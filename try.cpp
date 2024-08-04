#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    string name;
    int id;
    float salary;

    // Constructor
    Employee(string a, int b, float c) {
        name = a;
        id = b;
        salary = c;
    }

    // Method to display employee details
    void display() {
        cout << "NAME IS: " << name << endl;
        cout << "ID IS: " << id << endl;
        cout << "SALARY IS: " << salary << endl;
    }
};

int main() {
    string name;
    int id;
    float salary;

    Employee employees[3];

    for (int i = 0; i < 3; i++) {
        cout << "ENTER THE NAME: " << endl;
        cin >> name;
        cout << "ENTER THE ID: " << endl;
        cin >> id;
        cout << "ENTER THE SALARY: " << endl;
        cin >> salary;

        // Create an employee object and display details
        employees[i] = Employee(name, id, salary);
        employees[i].display();
    }

    return 0;
}