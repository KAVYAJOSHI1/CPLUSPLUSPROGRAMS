#include<iostream>
using namespace std;
int main()
{
    int* a=new int[5];
    int sum=0;
    cout<<"ENTER THE ARRAY ELEMENTS:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    cout<<"SUM IS "<<sum<<endl;
}