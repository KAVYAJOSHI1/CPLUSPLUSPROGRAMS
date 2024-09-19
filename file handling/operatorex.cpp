#include <iostream>
#include <stdexcept> // For standard exceptions like std::invalid_argument

using namespace std;

class Number {
private:
    int value;
public:
    // Constructor to initialize the number
    Number(int v) : value(v) {}

    // Overloading the division operator
    Number operator/(const Number& other) {
        if (other.value == 0) {
            throw invalid_argument("Division by zero exception.");
        }
        return Number(value / other.value);
    }

    // A function to print the value of the object
    void print() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    try {
        Number num1(10); // Create an object with value 10
        Number num2(0);  // Create an object with value 0

        // Attempt to divide num1 by num2; this will throw an exception
        Number result = num1 / num2;
        result.print(); // Won't be executed due to the exception

    } catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
