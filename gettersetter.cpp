#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int code;

public:
    Person(string n = "", int a = 0) : name(n), code(a) {}

    string getName() {
        return name;
    }

    void setName(const string& n) {
        name = n;
    }

    int getCode() {
        return code;
    }

    void setCode(int a) {
        code = a;
    }
};

class Account : virtual public Person {
private:
    int pay;

public:
    Account(string n = "", int a = 0, int b = 0) : Person(n, a), pay(b) {}

    int getPay() {
        return pay;
    }

    void setPay(int b) {
        pay = b;
    }
};

class Admin : virtual public Person {
private:
    int experience;

public:
    Admin(string n = "", int a = 0, int c = 0) : Person(n, a), experience(c) {}

    int getExperience() {
        return experience;
    }

    void setExperience(int c) {
        experience = c;
    }
};

class Master : public Account, public Admin {
public:
    Master(string n = "", int a = 0, int b = 0, int c = 0)
        : Person(n, a), Account(n, a, b), Admin(n, a, c) {}

    void display() {
        cout << "NAME IS: " << getName() << endl;
        cout << "CODE IS: " << getCode() << endl;
        cout << "EXPERIENCE IS: " << getExperience() << endl;
        cout << "PAY IS: " << getPay() << endl;
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
