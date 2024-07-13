#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    void add(const Complex &c)
    {
        int r = real + c.real;
        int i = imag + c.imag;
        cout << "The sum is " << r << " + " << i << "i" << endl;
    }

    void sub(const Complex &c)
    {
        int r = real - c.real;
        int i = imag - c.imag;
        cout << "The difference is " << r << " + " << i << "i" << endl;
    }

    void mul(const Complex &c)
    {
        int r = (real * c.real) - (imag * c.imag);
        int i = (real * c.imag) + (imag * c.real);
        cout << "The product is " << r << " + " << i << "i" << endl;
    }
};

int main()
{
    Complex obj(12, 4);
    Complex obj1(16, 5);

    obj.add(obj1);
    obj.sub(obj1);
    obj.mul(obj1);

    return 0;
}
