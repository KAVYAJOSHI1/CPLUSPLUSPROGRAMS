#include <iostream>
using namespace std;
class Shape
{
public:
virtual void draw()=0;

virtual void info()
{
    cout<<"Shape"<<endl;
}
};
class Circle:public Shape
{
    public:
void draw()
{
    cout<<"Drawing a Circle";
}
void info()
{
    cout<<"THis is a Circle";
}
};
class Rectangle:public Shape
{
    public:
    void draw()
    {
        cout<<"Drawing a Rectangle\n";
    }
    void info()
    {
         cout<<"This is a Rectangle\n";
    }

};
int main()
{
    Circle c;
    Rectangle r;
    Shape *ptrc=&c;
    Shape *ptr=&r;
    ptrc->draw();
    ptrc->info();
    ptr->draw();
    ptr->info();
    return 0;
}