#include <iostream>
using namespace std;
class A
{
    public :
    int a=5;
    void display()
    {
        cout<<a;
    }
};
class B:public  A
{
    public :
    int b=4;
    void display()
    {
        cout<<b;
    }
};
int main()
{
    B obj;
    obj.display();
    obj.A::display(); 
}
