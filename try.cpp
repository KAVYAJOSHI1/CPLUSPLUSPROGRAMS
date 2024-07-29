#include <iostream>
using namespace std;
int add(int a ,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cout<<"ENTER A";
    cin>>a;
    cout<<"ENTER B";
    cin>>b;
    cout <<"SUM IS:"<<add(a,b)<<endl;
}