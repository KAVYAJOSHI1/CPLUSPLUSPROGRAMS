#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    virtual void show()
    {
        cout<<"base1"<<endl;
    }
};
class der1:public base
{
    public:
    int b;
    void show()
    {
        cout<<"derv1"<<endl;
    }
};
class der2:public base
{
    public:
    int c;
    void show()
    {
        cout<<"derv2"<<endl;
    }
};
int main()
{
    base b1;
    der1 d1;
    der2 d2;
    base *ptr;
    ptr=&d1;
    ptr->show();
    ptr=&d2;
    ptr->show();
    return 0;
}

