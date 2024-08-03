#include<iostream>
using namespace std;
class B;
class A
{
    private:
    float a;
    public:
    A(float n1)
    {
        a=n1;
    }
    friend void multiple(A,B);


};
class B
{
    private:
    float b;
    public:
    B(float n2)
    {
        b=n2;
    }
    friend void multiple(A,B);


};
void multiple(A x,B y)
{
    if (int(x.a)%int(y.b)==0.0)
    {
        cout<<"B IS MULTIPLE OF A"<<endl;
    }
    else
    {
        cout<<"B IS NOT MULTIPLE OF A"<<endl;
    }
}
int main()
{
A obj1(10);
B obj2(5);
multiple(obj1,obj2);
}