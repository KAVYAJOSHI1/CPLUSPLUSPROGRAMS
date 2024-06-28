//CIRCLE TRIANGLE BOX
#include <iostream>
#include <math.h>
using namespace std;
int  area(int r)
{
  return 3.14*r*r;
}
int area(int b,int a)
{
   return 0.5*b*a;
}
float area(float z)
{
  return z*z*z;
}
int main()
{
    cout<<"ENTER RADIUS \n";
    float z;
    cout<<"ENTER LENGTH AND BREADTH \n";
    float b;
    cin>>z;
    int r;
    
    int a;
    cin>>a>>b;
    cin>>r;
    cout<< "FLOAT"<<area(a,b)<<endl;
    cout<< "RADIUS"<<area(z)<<endl;
    cout<< "INT"<<area(r)<<endl;


}