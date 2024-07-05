#include <iostream>
using namespace std;
class COMPLEX
{
    private:
    int real,imag;
    public:
    void read()
    {
        cout<<"ENTER THE REAL AND IMAGINARY PARTS\n"<<endl;
        cin>>real>>imag;
    }
    void add(COMPLEX c1,COMPLEX c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
    void display() 
    {
        cout<<"THE SUM IS "<<real<<"+"<<imag<<"i"<<endl;
    }     
    };

int main()
{
COMPLEX c1,c2,c3;
c1.read();
c2.read();
c3.add(c1,c2);
c3.display();
}