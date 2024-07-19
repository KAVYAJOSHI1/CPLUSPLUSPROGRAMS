/*. Write a C++ program for demonstrating the concept of function overloading. Create class
shape with function surfacearea(). Overload function surfacearea() for calculating the
surface area sphere, cylinder and cube.
*/
#include <iostream>
using namespace std;
class shape
{
    public:
    float surfacearea(float r)
    {
        float area;
        area=3.14*r*r;
        return area;
    }
    float surfacearea(float r,float h)
    {
        float area;
        area=2*3.14*r*r+h*3.14*r*r;
        return area;
    }
    float surfacearea(float l,float b,float h)
    {
        float area;
        area=2*(l*b+l*h+b*h);
        return area;
}
};
int main()
{
    shape s;
    float l,b,h,r;
    cout<<"Enter the length, breadth and height of the cube : ";
    cin>>l>>b>>h;
    cout<<"Surface area of the cube is : "<<s.surfacearea(l,b,h)<<endl;
    cout<<"Enter the radius of the sphere : ";
    cin>>r;
    cout<<"Surface area of the sphere is : "<<s.surfacearea(r)<<endl;
    cout<<"Enter the radius and height of the cylinder : ";
    cin>>r>>h;
    cout<<"Surface area of the cylinder is : "<<s.surfacearea(r,h)<<endl;
}