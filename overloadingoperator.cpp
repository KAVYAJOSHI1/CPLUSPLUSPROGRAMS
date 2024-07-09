//overloading unary operator -

#include <iostream>
using namespace std;
class space{
    int a;
    int b;
    public:
    void getdata(int x,int y){
        a=x;
        b=y;
    }
    void operator -(){
        a=-a;
        b=-b;
    }
    void display(){
        cout<<a<<b<<endl;
}
};
int main()
{
    space s1;
    cout<<"CHANGED VALUE IS:\n";
    s1.getdata(10,20);
    -s1;
    s1.display();
}