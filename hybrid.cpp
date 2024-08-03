#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int code;

    Person(string n, int a) : name(n), code(a) {}
};

class Account : virtual public Person {
public:
    int pay;

    Account(string n, int a, int b) : Person(n, a), pay(b) {}
};

class Admin : virtual public Person {
public:
    int experience;

    Admin(string n, int a, int c) : Person(n, a), experience(c) {}
};

class Master : public Account, public Admin {
public:
    Master(string n = "", int a = 0, int b = 0, int c = 0)
        : Person(n, a), Account(n, a, b), Admin(n, a, c) {}

    void display() {
        cout << "NAME IS: " << name << endl;
        cout << "CODE IS: " << code << endl;
        cout << "EXPERIENCE IS: " << experience << endl;
        cout << "PAY IS: " << pay << endl;
    }
};

int main() {
    string n;
    int a, b, c;

    cout << "ENTER THE NAME" << endl;
    cin >> n;
    cout << "ENTER THE CODE" << endl;
    cin >> a;
    cout << "ENTER THE PAY" << endl;
    cin >> b;
    cout << "ENTER THE EXPERIENCE" << endl;
    cin >> c;

    Master obj4(n, a, b, c);
    obj4.display();

    return 0;
}
