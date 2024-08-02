//Virtual class
#include <iostream>
using namespace std;
class A
{
    public:
    int a=5;

};
class B:virtual public A
{
    public:
int b=6;
};
class C:virtual public A
{
    public:
int c=7;
};
class D:public C,public B
{
    public:
int sum;
};
int main()
{
    D obj;
    obj.sum=obj.a+obj.b+obj.c;
    cout<<obj.sum;
}