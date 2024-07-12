/*q12) write a program to print a Fibonacci series of n numbers*/
#include <iostream>
using namespace std;
int main()
{
    int a=0,b=1,n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++)
    {
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;

}