#include<iostream>
using namespace std;
class Cylinder;
class Box
{
    public:
    int l,b,h,vol;
    Box(int a,int b, int c)
    {
        l=a;
        b=b;
        h=c;
    }
    int calculate()
    {
vol=l*b*h;
    }
    friend void compare(Box ,Cylinder);

};
class Cylinder
{
    public:
    int r,h,vol;
    Cylinder(int a,int b)
    {
        r=a;
        h=b;
    }
    int calculate()
    {
        vol=r*h;
    }
     friend void compare(Box ,Cylinder);

};
 void compare(Box x,Cylinder y)
 {
  if(x.vol>y.vol)
  {
    cout<<"B > C"<<endl;
  }
  else
  {
    cout<<"B < C"<<endl;
  }
 }
 int main()
 {
    Box obj1(2,3,4);
    obj1.calculate();
    Cylinder obj2(4,5);
    obj2.calculate();
    compare(obj1,obj2);
 }