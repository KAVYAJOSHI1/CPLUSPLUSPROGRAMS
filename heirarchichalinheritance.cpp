#include<iostream>
using namespace std;

    class A
    {
   public :
   int a=5;
   int get()
   {
    return a;
   }
    };
class B:public A
{
    public :
    int b=10;
    void display()
    {
        cout<<a*b;
    }
};
class C:public A
{
public:
int c=4;
void display1()
{
    cout<<a*c;
}
};
int main()
{
    B obj;
    obj.display();
    C ob1;
    ob1.display1();
}