/*8. Write a program to create a class Volume with overloaded functions to calculate the
volume of a cube, a sphere, and a cylinder. Create objects to demonstrate the use of
overloaded functions.*/

#include <iostream>
using namespace std;
class Volume
{
    
    public :
    float volume(float l, float b, float h)
    {
        return l * b * h;
    }
    float volume(float r)
    {
        return 3.14 * r * r * r;
    }
    float volume(float r, float h)
    {
        return 3.14 * r * r * h;
    }
};
int main()
{
    Volume v;
    float l, b, h, r;
    cout << "Enter the length, breadth and height of the cube : ";
    cin >> l >> b >> h;
    cout << "Volume of the cube is : " << v.volume(l, b, h) << endl;
    cout << "Enter the radius of the sphere : ";
    cin >> r;
    cout << "Volume of the sphere is : " << v.volume(r) << endl;
    cout << "Enter the radius and height of the cylinder : ";
    cin >> r >> h;
    cout << "Volume of the cylinder is : " << v.volume(r, h) << endl;
}