#include<iostream>
using namespace std;
class demo
{
    int i;
    public:
    demo(int x)
    {
        i=x;
    }
    void display()
    {
        cout<<"i="<<i;
    }
};
int main()
{
    demo d1(10);
    demo *ptr=&d1;
    ptr->display();
}