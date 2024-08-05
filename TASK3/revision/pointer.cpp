#include<iostream>
using namespace std;
class square
{
    public:
    float side,A,P;
    void setSide(float s)
    {
        side=s;
    }
    void area()
    {
        A= side*side;
    }
    void perimeter()
    {
        P=4*side;
    }
    void display()
    {
        cout<<"AREA IS : "<<A<<endl;
        cout<<"PERIMETER IS : "<<P<<endl;
    }

};
int main()
{
    square obj;
    square *ptr;
    ptr=&obj;
    ptr->setSide(5.4);
    ptr->area();
    ptr->perimeter();
    ptr->display();

}