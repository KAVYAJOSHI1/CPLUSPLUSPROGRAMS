#include<iostream>
#include<iomanip>
using namespace std;

struct student {
    int rollno;
    string name;
    double m1;
    double m2;
    double m3;
};

// User-defined function to input student data
void inputStudentData(student &s) {
    cout << "Enter RollNo: ";
    cin >> s.rollno;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter marks of subject 1: ";
    cin >> s.m1;
    cout << "Enter marks of subject 2: ";
    cin >> s.m2;
    cout << "Enter marks of subject 3: ";
    cin >> s.m3;
}

// User-defined function to calculate percentage
double calculatePercentage(const student &s) {
    double total = s.m1 + s.m2 + s.m3;
    return (total / 300.0) * 100.0;
}

// User-defined function to display student data
void displayStudentData(const student &s) {
    cout << left << setw(5) << s.rollno << setw(25) << s.name 
         << setw(5) << s.m1 << setw(5) << s.m2 << setw(5) << s.m3 
         << setw(5) << calculatePercentage(s) << endl;
}

int main() {
    int n;
    cout << "Number of student records: ";
    cin >> n;
    
    student Student[n]; // Array of student structures
    
    cout << "Enter student records: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        inputStudentData(Student[i]); // Call the user-defined function to input data
    }
    
    // Display table headers
    cout << left << setw(5) << "Rlno" << setw(25) << "Name of Student" 
         << setw(5) << "M1" << setw(5) << "M2" << setw(5) << "M3" 
         << setw(5) << "Percentage" << endl;
    
    // Call the user-defined function to display each student's data
    for (int i = 0; i < n; i++) {
        displayStudentData(Student[i]);
    }
    
    return 0;
}
