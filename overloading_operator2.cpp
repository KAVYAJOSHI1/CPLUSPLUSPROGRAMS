//Program to overload unary operator ++
#include <iostream>
using namespace std;
class A
{
    public :
    int a;
    int b;
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    void operator ++()
    {
        a++;
        b++;
    }
    void display()
    {
        cout<<a<< "   "<<b<<endl;
    }
};
int main()
{
    A obj(10,20);
    ++obj;
    cout<<"AFTER INCREMENT:"<<endl;
    obj.display();
}