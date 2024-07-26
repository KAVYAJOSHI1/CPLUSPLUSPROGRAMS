/*2. Demonstrate the concept of multilevel inheritance. Create a class Student with
data members enrol_no, name, class and memeber functions for getting the
data and display data. Derive a class Test from Student with members as
marks of five subjects, functions for getting the data and display. Derive class
Result from Test with total and percentage as members and calculate() function
as member function to calculate percentage of student. In main create the
object and display all the student details.*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int enrol_no;
    string name;
    string student_class;

    void getdata()
    {
        cout << "Enter enrollment number: ";
        cin >> enrol_no;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter class: ";
        cin >> student_class;
    }

    void display()
    {
        cout << "Enrollment Number: " << enrol_no << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << student_class << endl;
    }
};

class Test : public Student
{
public:
    float marks[5];

    void getdata()
    {
        Student::getdata();
        for (int i = 0; i < 5; ++i)
        {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void display()
    {
        Student::display();
        for (int i = 0; i < 5; ++i)
        {
            cout << "Marks for subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

class Result : public Test
{
public:
    float total;
    float percentage;

    void calculate()
    {
        total = 0;
        for (int i = 0; i < 5; ++i)
        {
            total += marks[i];
        }
        percentage = total / 5;
    }

    void display()
    {
        Test::display();
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Result r1;
    r1.getdata();
    r1.calculate();
    r1.display();

    return 0;
}
