//Create a class Rectangle having data members length and width demonstate deafult parameterized default copy constructor
#include <iostream>
using namespace std;
class rectangle{
    int l,w;
    public:
    rectangle(int a,int b)
    {
        l=a;
        w=b;
    }
    rectangle(rectangle &r)     
    {
        l=r.l;
        w=r.w;
    }
    rectangle()
    {
        l=0;
        w=0;
    }
    void show()
    {
        cout<<l<<" "<<w<<endl;
    }


};
int main()
{
    rectangle r1;
    r1.show();
    rectangle r2(10,20);
    r2.show();
    rectangle r3(r2);
    r3.show();
}
