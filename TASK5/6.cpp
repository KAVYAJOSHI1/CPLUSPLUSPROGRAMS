/*6. Create a ComplexNumber class with real and imaginary parts. Implement
multiple constructors to initialize a complex number with no arguments, one
argument, and two arguments. Show how constructor overloading works by
creating complex number objects using different constructors*/

#include <iostream>
using namespace std;
class Complex   
{
    private:
    int real,imaginary;
    public:
    Complex()
    {
        real=0;
        imaginary=0;
    }
    Complex(int x)
    {
        real=x;
        imaginary=0;
    }
    Complex(int x,int y)
    {
        real=x;
        imaginary=y;
    }
    void show()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
};
int main()
{
    Complex c1;
    Complex c2(5);
    Complex c3(5,6);
    c1.show();
    c2.show();
    c3.show();
    return 0;
}