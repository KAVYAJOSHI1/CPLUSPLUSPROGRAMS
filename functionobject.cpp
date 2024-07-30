#include <iostream>
using namespace std;
class a
{
    public:
    int x;
    set()
    {

        cout<<"ENTER THE VALUE";
        cin>>x;
    }
    summ(a b,a c)
    {
        cout<"SUM IS:"<<<b.x+c.x;

        
            }

};
int main()
{
    a obj1;
    obj1.set();
    a obj2;
    obj2.set();
    a sum;
    sum.summ(obj1,obj2);

}