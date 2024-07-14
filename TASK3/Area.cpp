#include <iostream>
using namespace std;

class Area {
public:
    int area(int a, int b) {
        return a * b;
    }

    int area(int a) {
        return a * a;
    }

    double area(double r) {
        return 3.14 * r * r;
    }

    double area(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    Area obj;
    cout << "Area of Square: " << obj.area(5) << endl;
    cout << "Area of Rectangle: " << obj.area(5, 10) << endl;
    cout << "Area of Circle: " << obj.area(5.5) << endl;
    cout << "Area of Triangle: " << obj.area(5.0, 10.0) << endl;
    return 0;
}
