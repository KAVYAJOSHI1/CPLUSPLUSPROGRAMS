/*6. Write a C++ program to create a class called Triangle that has private member variables for
the lengths of its three sides. Implement member functions to determine if the triangle is
equilateral, isosceles, or scalene.
*/

#include <iostream>
using namespace std;
class Triangle{
    private:
    int a,b,c;
    public:
    Triangle(int x, int y, int z){
        a=x;
        b=y;
        c=z;
    }
    void check(){
        if(a==b && b==c){
            cout<<"Equilateral Triangle";
        }
        else if(a==b || b==c || a==c){
            cout<<"Isosceles Triangle";
        }
        else{
            cout<<"Scalene Triangle";
        }
    }
};
int main(){
    int x,y,z;
    cout<<"Enter the lengths of the sides of the triangle: ";
    cin>>x>>y>>z;
    Triangle obj(x,y,z);
    obj.check();
}