//EXAMPLE OF FRIEND FUNCTION TO CALCULATE SUM OF TWO NUMBERS
#include <iostream>
using namespace std;
class B;
class A
{
    private:
    int a;
    public:
    A(int x)
{
    a=x;
}       
friend int sum(A,B);
};
class B
{
    private:
    int b;
    public:
    B(int y)
{
    b=y;
}       
friend int sum(A,B);
};
int sum(A x,B y)
{
    return(x.a+y.b);
}
int main()
{
    A obj1(5);
    B obj2(10);
    cout<<"SUM OF TWO NUMBERS IS "<<sum(obj1,obj2);}