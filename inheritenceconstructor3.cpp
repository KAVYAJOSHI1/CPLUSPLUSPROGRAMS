//using multilevel inheritance
#include <iostream>
using namespace std;
class A
{
    public:
    int a;
    A(int x)
    {
        a=x;
        cout<<a;
    }
};
class B:public A
{
    public:
    int b;
    B(int x,int y):A(x)
    {
        b=y;
        cout<<b;
    }
};
class C:public B
{
    public:
    int c;
    C(int x,int y,int z):B(x,y)
    {
        c=z;
        cout<<c;
    }

};
int main()
{
    C c(1,2,3);
}