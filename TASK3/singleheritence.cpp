#include<iostream>
using namespace std;
class A
{
public :
int legs=4;
display1()
{
    cout<<"legs"<<legs;
}
};
class B:public A
{
    public:
    int tail=1;
   display2()
   {
    cout<<"tail"<<tail;
   }
};
int main()
{
    B obj;
    obj.display1();
    obj.display2();

}