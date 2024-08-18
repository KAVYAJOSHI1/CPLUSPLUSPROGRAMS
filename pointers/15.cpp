#include<iostream>
using namespace std;
int* add(int a,int b)
{
    int* sum=new int;
    *sum=a+b;
    return sum;

}
int main()
{
    int a=5;
    int b=9;
    int* result=add(a,b);
cout<<"SUM IS"<<*result<<endl;
}