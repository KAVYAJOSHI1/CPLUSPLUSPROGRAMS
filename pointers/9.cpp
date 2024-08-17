#include<iostream>
using namespace std;
int main()
{
    int n;
   
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
     int* a=new int[n];
    cout<<"ENTER THE ARRAY ELEMENTS"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"ARRAY IS:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
      int max=a[0];
    for(int i=0;i<n;i++)
    {
   
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"MAXIMUM IS:"<<max;
}