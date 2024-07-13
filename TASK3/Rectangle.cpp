/*2. Write a program to create a class Rectangle with data members length and width. Include
member functions to calculate and display the area and perimeter of the rectangle. Create
objects to find and display the area and perimeter of different rectangles.*/
#include <iostream>
using namespace std;
class Rectangle
{
    int length, width;
public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    area()
    {
        cout <<"AREA OF RECTANGLE IS:"<< length * width;

    }
    perimeter()
    {
        cout <<"PERIMETER OF RECTANGLE IS:"<< 2 * (length + width);
        
    }
};
int main()
{
    Rectangle r1(5, 10);
    r1.area();
    r1.perimeter();

    Rectangle r2(3, 6);
    r2.area();
    r2.perimeter();
    return 0;
}