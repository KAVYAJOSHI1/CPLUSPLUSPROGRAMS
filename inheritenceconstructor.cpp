#include <iostream>
using namespace std;
class base
{
    int x;
    public:
    base(int i)
    {
        x=i;
        cout<<"base class constructor"<<endl;
        cout<<x;
    }
};
class Derived:public base
{
    int y;
    public:
    Derived(int i,int j):base(i)
    {
        y=j;
        cout<<"Derived class constructor "<<endl;
        cout<<y;
    }
};
int main()
{
    Derived ob(10,20);
    return 0;
}