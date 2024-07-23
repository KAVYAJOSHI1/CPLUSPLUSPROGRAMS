#include <iostream>
using namespace std;
class A
{
    public:
    int a;
    A(int i)
    {
        a = i;
        cout<<a;
    }
};

class B
{
    public:
    int b;
    B(int j)
    {
        b = j;
        cout<<b;
    }
};
class C:public A,public B
{
    int m,n;
    public:
    C(int x,int y,int z,int w):B(x),A(y)//ORDER MATTERS HERE
    {
        m = z;
        n = w;
        cout<<m<<n;
    }
};
int main()
{
    C c(1,2,3,4);
}