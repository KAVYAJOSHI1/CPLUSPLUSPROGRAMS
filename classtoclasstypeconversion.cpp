#include <iostream>
using namespace std;

class ClassB;  // Forward declaration of ClassB

class ClassA {
private:
    int valueA;

public:
    ClassA(int val = 0) : valueA(val) {}

    // Conversion operator to convert ClassA to ClassB
    operator ClassB();
    
    int getValueA() const {
        return valueA;
    }
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int val = 0) : valueB(val) {}

    // Conversion constructor to convert ClassA to ClassB
    ClassB(const ClassA& a) : valueB(a.getValueA()) {}

    int getValueB() const {
        return valueB;
    }
};

// Define the conversion operator to convert ClassA to ClassB
ClassA::operator ClassB() {
    return ClassB(valueA);
}

int main() {
    ClassA a(42);  // ClassA object
    ClassB b = a;  // Convert ClassA to ClassB using conversion operator
    cout << "Value in ClassA: " << a.getValueA() << endl;
    cout << "Value in ClassB: " << b.getValueB() << endl;

    return 0;
}
