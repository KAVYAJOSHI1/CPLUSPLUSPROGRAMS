#include<iostream>
using namespace std;
int& max(int &x,int &y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a,b;
    cout<<"ENTER THE 2 NUMBERS:"<<endl;
    cin>>a>>b;
    cout<<max(a,b);
}