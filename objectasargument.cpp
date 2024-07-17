#include <iostream>
using namespace std;
class A
{
    int a;
    public:
    A(int x)
    {
        a=x;
    }
    friend int sum(A x,A y)
    {
        return(x.a+y.a);
    }
};
int main()
{
    A x(10);
    A y(20);
    sum(x,y);
}