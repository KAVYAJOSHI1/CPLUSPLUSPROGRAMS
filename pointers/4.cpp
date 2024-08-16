#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=8;
    int *ptr1=&a;
    int *ptr2=&b;
    int sum=*ptr1+*ptr2;
    cout<<"SUM IS:"<<sum<<endl;
}