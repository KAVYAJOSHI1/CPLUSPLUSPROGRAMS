#include<iostream>
using namespace std;
 inline int fun(int a)
{
    return a*a*a;
}
int main()
{
    int a=5;
    cout<<fun(a);
    return 0;
}