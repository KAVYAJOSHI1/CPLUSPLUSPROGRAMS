#include <iostream>
using namespace std;

class student {
    int roll_no;
    char name[20];
public:
    void getdata1() {
        cout << "ENTER THE NAME OF THE STUDENT" << endl;
        cin >> name;
        cout << "ENTER THE ROLL NUMBER OF THE STUDENT" << endl;
        cin >> roll_no;
    }

    void display1() {
        cout << "THE NAME OF THE STUDENT IS " << name << endl;
        cout << "THE ROLL NUMBER OF THE STUDENT IS " << roll_no << endl;
    }
};

class cse : public student {
    int marks1, marks2;
public:
    void getdata2() {
        cout << "ENTER THE MARKS OF THE STUDENT" << endl;
        cin >> marks1;
        cout << "ENTER THE MARKS OF THE STUDENT" << endl;
        cin >> marks2;
    }

    void display2() {
        cout << "THE MARKS OF THE STUDENT ARE " << marks1 << " and " << marks2 << endl;
    }

    // Make the marks accessible to derived classes
    int getTotalMarks() {
        return marks1 + marks2;
    }
};

class Test : public cse {
public:
    void display3() {
        cout << "THE TOTAL MARKS OF THE STUDENT IS " << getTotalMarks() << endl;
    }
};

int main() {
    Test t;
    
    t.getdata1();
    t.getdata2();
    t.display1();
    t.display2();
    t.display3();
    
    return 0;
}
