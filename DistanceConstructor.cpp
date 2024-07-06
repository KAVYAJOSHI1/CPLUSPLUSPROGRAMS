//Create a class distance having data members feet and inch .Create parameterixed constructorr to initialize member feet and inch.
#include <iostream>
using namespace std;
 class Distance
{
    public:
    int feet;
    int inch;
    Distance(int f,int i)
    {
        feet=f;
        inch=i;
    }
    void display()
    {
        cout<< feet << " "<< inch ;
    }
};
int main()
{
    Distance obj(5,10);
    obj.display();
    return 0;
}