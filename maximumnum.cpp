#include <iostream>
using namespace std;

void max(int a ,int b)
{
    cout<<"MAXIMUM NUMBER IS\n";
    if (a>b)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }
}
int  main()
{
    cout<<"ENTER THE NUMBER\n";
    int a,b;
    cin>>a>>b;
    max(a,b);
}