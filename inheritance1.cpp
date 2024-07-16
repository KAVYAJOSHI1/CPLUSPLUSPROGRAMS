#include <iostream>
using namespace std;
class a
{
    public:
    int legs=4;
    void display()
    {
        cout<<legs;
    }

};
class b: public a
{
    bool tail=true;
    public:
    void display2()
    {
        cout<<tail;
    }
};
int main()
{
    a a1;
    b b1;
    b1.display1();
    b1.display2();
}