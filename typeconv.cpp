#include <iostream>
using namespace std;
class sample 
{
    int a ;
    public :
    sample(){}
    sample(int x)
    {
        a=x;
    }
    void display()
    {
    cout<<a;
    }
    };
int main()
{
    int m=10;
    sample obj;
    obj=m;
    obj.display();
    return 0;
}