/*3. Write a program to create class point with members angle and radius. Create two
constructors for initializing object with values and object. Create function convert() to
convert polar coordinates to x-y coordinates. In main() take the value from user and
dynamically allocate the value to objects. Create copy constructor and display the results of
both.*/
#include <iostream>
#include <math.h>
using namespace std;
class point
{
    float angle, radius;
public:
    point(float a, float b)
    {
        angle = a;
        radius = b;
    }
    point(float a)
    {
        angle = a;
    }
    void convert()
    {
        float x, y;
        x = radius * cos(angle);
        y = radius * sin(angle);
        cout << x << " " << y;
    }
};
int main()
{
    float a, b;
    cout << "Enter angle and radius" << endl;
    cin >> a >> b;
    point p(a, b);
    p.convert();
}