#include <iostream>
using namespace std;
class A
{
    public :
    int a=5;
    display()
    {
        cout<<a;
    }

};
class B:public A{
    public:
    int a=6;
    display1()
    {
        cout<<a;
    }

};
class C:public B{
    public:
    int a=7;
    display2()
    {
        cout<<a;
    }

};
int main()
{
    C obj;
    obj.display();
    obj.display1();
    obj.display2();

}