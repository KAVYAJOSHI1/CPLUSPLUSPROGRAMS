#include<iostream>
using namespace std;
class Transport
{
    public:
    virtual void move()=0;
    virtual ~Transport(){}
};
class Car:public Transport
{
    public:
    void move()
    {
        cout<<"Car is moving on the road"<<endl;
    }
};
class Bike:public Transport
{
    public:
    void move()
    {
        cout<<"Bike is pedaling on the road"<<endl;
    }
};
class Plane:public Transport
{
    public:
    void move()
    {
       cout<<"Plane is flying in the air"<<endl;
    }
};
int main()
{
    Transport *t[3];
    t[0]=new Car();
    t[1]=new Bike();
    t[2]=new Plane();
    for(int i=0;i<3;i++)
    {
        t[i]->move();
    }
    for(int i=0;i<3;i++)
    {
        delete t[i];
    }
    return 0;
}