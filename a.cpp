//A factorial program using * function
#include <iostream>
using namespace std;
class A
{
    int n;
    int f=1;
    public:
    A(int x)
    {
        n=x;
    }
    void operator *()
    {
        
        for(int i=1;i<=n;i++)
        {
            f=f*i;
        }
       
    }
    void display()
    {
        cout<<"Factorial of "<<n<<" is: "<<f;
    }
};
int main()
{
    A obj(5);
    *obj;
    obj.display();
}