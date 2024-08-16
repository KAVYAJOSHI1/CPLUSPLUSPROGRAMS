#include<iostream>
using namespace std;
int main()
{
    int a=9;
    int b=10;
    int *p1=&a,*p2=&b;
    if(*p1>*p2)
    {
        cout<<*p1<<endl;

    }
    else
    cout<<*p2<<endl;
}