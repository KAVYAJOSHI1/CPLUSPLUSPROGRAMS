#include<iostream>
using namespace std;
int main()
{
    int *a=new int[5];
    cout<<"ENTER THE ELEMENTS:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"ELEMENTS IN REVERSE ORDER ARE:"<<endl;
    for(int i=4;i>=0;i--)
    {
        cout<<a[i];
    }
}