#include <iostream>
using namespace std;
int fun(int a,int b)
{
    return a+b;
}
int fun(int a)
{
    return a;
}
float  fun(float a)
{
    return a;
}
int main()
{
    cout<<fun(1,2);
    cout<<fun(1);
    cout<<fun(2.2f);
}