/*5. Write a program to create a class Circle with a data member radius. Include an inline
member function to calculate and return the area of the circle. Create an object to find and
display the area of the circle*/
#include <iostream>
using namespace std;
class Circle
{
    int radius;

public:
 Circle(int r)
{
    radius = r;

}
inline int  area()
{
    return (3.14 * radius * radius);
}
};
int main()
{
    Circle c(5);
    cout << "Area of the circle is: " << c.area() << endl;
    return 0;
}