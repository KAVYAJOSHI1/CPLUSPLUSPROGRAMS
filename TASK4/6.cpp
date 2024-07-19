/*6. Create a class complex with members real and imaginary. Overload the binary operator for
multiplication(*) and division (/) of two complex numbers*/

#include <iostream>
using namespace std;
class complex
{
    int real;
    int imaginary;
    public:
    complex(int r=0,int i=0)
    {
        real=r;
        imaginary=i;
    }
    void display()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    void operator *(complex c)
    {
        real=real*c.real;
        imaginary=imaginary*c.imaginary;
    }
    void operator /(complex c)
    {
        real=real/c.real;
        imaginary=imaginary/c.imaginary;
    }

};
int main()
{
    complex c1(2,3),c2(4,5);
    c1*c2;
    c1.display();
    c1/c2;
    c1.display();
}