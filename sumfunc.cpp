#include <iostream>
using namespace std;
int sum(int a,int b)
{
    cout<<"SUM OF "<<a<<"AND"<<b<<"IS"<<a+b;
}
int main()
{
    int a,b;
    cout<<"ENTER TWO NUMBERS";
    cin>>a>>b;
    sum(a,b);
}