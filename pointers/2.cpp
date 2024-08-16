#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int *ptr=&a;
    cout<<*ptr<<endl;
    a=8;
    cout<<*ptr;
}