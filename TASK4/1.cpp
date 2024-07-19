/*1. Write a C++ program to create a class point with three private members x, y and z.
Implement function to calculate Euclidean distance between two points and display the
result.*/

#include <iostream>
#include <math.h>
using namespace std;
class point{
    int x,y,z;
    public:
    point(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }
    void distance(point p2){
        int d;
        d = (x-p2.x)*(x-p2.x) + (y-p2.y)*(y-p2.y) + (z-p2.z)*(z-p2.z);
        cout << sqrt(d);
    }
};
int main(){
    int a,b,c;
    cout << "Enter the coordinates of the first point: ";
    cin >> a >> b >> c;
    point p1(a,b,c);
    cout << "Enter the coordinates of the second point: ";
    cin >> a >> b >> c;
    point p2(a,b,c);
    p1.distance(p2);
}