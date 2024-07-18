#include <iostream>
using namespace std;
class base
{
    public:
    void fun()
    {
        cout<<"fun of base class"<<endl;
    }
};
class derived:public base
{
    public:
    void fun()
    {
        cout<<"fun of derived class"<<endl;
    }
};
int main()
{
    derived d;
    d.fun();
    d.base::fun();
    return 0;
}