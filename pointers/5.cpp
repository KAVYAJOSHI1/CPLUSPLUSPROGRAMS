#include<iostream>
using namespace std;
int add(int &a,int &b)
{
    int sum;
    sum=a+b;
    cout<<sum;
    return 0;
}
int main()
{
    int a=5;
    int b=8;
    add(a,b);
}