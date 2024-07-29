#include<iostream>
using namespace std;
int fun(int a=3)
{
    return a+a;
}
int main()
{
    int a=5;
    cout<<fun(a);
    cout<<fun();
}