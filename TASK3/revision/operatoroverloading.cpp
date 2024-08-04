#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    int operator +()
    {
       return a+b;
    }
    int operator -()
    {
        return a-b;
    }
    int operator *()
    {
        return a*b;
    }
    int operator ~()
    {
        return a<<b;
    }
    int operator !()
    {
        return a>>b;
    }
};
int main()
{
    A obj(5,2);
    cout<<+obj;
    cout<<-obj;
    cout<<*obj;
    cout<< ~obj;
    cout<< !obj;
    return 0;
}