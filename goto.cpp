#include <iostream>
using namespace std;
int main()
{
    int n;
    label:
    cout<<"ENTER POSITIVE NUMBER:\n";
    cin>>n;
    if(n<0)
    {
        goto label;
    }
    else
    {
        cout<<n;
    }

}