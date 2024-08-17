#include<iostream>
using namespace std;
int main()
{
    int* a=new int[5];
    cout<<"ENTER THE ARRAY ELEMENTS:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"ARRAY IS:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<4;i++)
    {
        int temp=0;
        for(int j=i+1;j<5;j++)
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    cout<<"ARRAY IS:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}