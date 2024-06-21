#include <iostream>
using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cout<<"enter the number:";
        cin>>a[i];
    }
    int n;
    cout<<"ENTER ELEMENT TO BE SEARCHED:";
    cin>>n;
    int i=0;
    while(i<5)
    {
        if(a[i]==n)
        {
            cout<<"ELEMENT FOUND AT POSITION"<<i+1;
            break;
        }
        i++;
    }
    if(i==5)
    {
        cout<<"ELEMENT NOT FOUND";
    }


}