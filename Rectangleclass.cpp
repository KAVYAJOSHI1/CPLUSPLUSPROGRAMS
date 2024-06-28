//Class rectangle with members width and height .Define function setvalues to initialize ,area to calculate .Demonstrate class Rectangle for two objects.

#include <iostream>
using namespace std;
class rectangle {
    private:
    int width, height;      
    public:
    void setvalues(int w, int h) {
        width = w;
        height = h;
    }
    int area() {
        return width * height;
    }
};  
int main() {
    rectangle r1, r2;
    r1.setvalues(12, 4);
    r2.setvalues(6, 8);
    cout << r1.area() << endl;
    cout << r2.area() << endl;
}