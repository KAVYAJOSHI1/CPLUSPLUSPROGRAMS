#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"Constructor is called"<<endl;
    }
    ~A()
    {
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    try
    {
        A obj;
        throw 10;
    }
    catch(int x)
    {
       cout<<"Exception has been caught, its "<<x;
    }
}