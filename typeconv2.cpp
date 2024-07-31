//Class to basic
#include <iostream>
using namespace std;
class a
{
    public:
    int a1,b1;
    a(int x,int y)
    {
  a1=x;
  b1=y;
    }
    operator int()
    {
        return a1+b1;
    }

};
int main()
{
    int sum;
    a obj(2,4);
    sum=obj;
    cout<<sum;

}