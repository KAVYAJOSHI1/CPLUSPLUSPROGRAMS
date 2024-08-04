#include<iostream>
using namespace std;
class rec
{
    public:
    float l,w,a;
    rec()
    {
        l=5;
        w=9;
    }
    rec(float a,float b)
    {
l=a;
w=b;
    }
    rec(rec& x)
    {
        l=x.l;
        w=x.w;
    }

    void area()
    {
         a=l*w;
    }
    void display()
    {
        cout<<"AREA IS: "<<a;
    }


    
};
int main()
{
    float a,b;
    cout<<"ENTER THE LENGTH";
    cin>>a;
    cout<<"ENTER THE BREADTH";
    cin>>b;
    rec obj1;
    obj1.area();
    obj1.display();
    rec obj2(a,b);
    obj2.area();
    obj2.display();
    rec obj3(obj2);
    obj3.area();
    obj3.display();



}