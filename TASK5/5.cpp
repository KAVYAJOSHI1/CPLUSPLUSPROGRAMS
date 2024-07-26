/*5. Create a base class Shape with a method to calculate the area. Derive two
classes Circle and Square from Shape. Implement the area calculation for each
derived class and demonstrate polymorphism by calculating the area of
different shapes using a Shape pointer.
*/

#include <iostream>
using namespace std;
class Shape {
    public:
        virtual float area() = 0;   
};
class Circle : public Shape {
    public:
        float area() {
            return 3.14 * radius * radius;
        }
        float radius;
};
class Square : public Shape {
    public:
        float area() {
            return length * length;
        }
        float length;
};
int main() {
    Shape *s;
    Circle c;
    Square sq;
    c.radius = 5;
    sq.length = 5;
    s = &c;
    cout << s->area() << endl;
    s = &sq;
    cout << s->area() << endl;
    return 0;
}