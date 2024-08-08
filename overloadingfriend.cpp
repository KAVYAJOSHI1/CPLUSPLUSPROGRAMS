#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Use in-class initialization for default values
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Friend function for overloading the + operator
    friend Complex operator+(const Complex& c1, const Complex& c2);

    // Use const correctness for display function
    void display() const {
        cout << "Real: " << real << ", Imaginary: " << imag << endl;
    }
};

// Definition of the friend function
Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);
    Complex c3;

    c3 = c1 + c2;

    cout << "c1: "; c1.display();
    cout << "c2: "; c2.display();
    cout << "c3: "; c3.display();

    return 0;
}