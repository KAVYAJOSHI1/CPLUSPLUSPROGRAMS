#include<iostream>
using namespace std;
int main()
{
    int n;
    int *a=new int [5];
   
    cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
    cin>>n;
    cout<<"ENTER THE ARRAY ELEMENTS"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"ARRAY IS:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)<<endl;
    }
}