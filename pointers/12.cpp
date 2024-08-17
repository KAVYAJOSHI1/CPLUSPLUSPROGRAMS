#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE VALUE";
    cin>>n;
    int* a=&n;
    int f=1;
    for(int i=1;i<=*a;i++)
    {
       f=f*i;
    }
    cout<<"THE FACTORIAL IS:"<<f;
}