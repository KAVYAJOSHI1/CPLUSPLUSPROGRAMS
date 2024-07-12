/*q13) write a program to convert decimal number to binary*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    
    int rem=0,rev=0,base=1;
    while(n!=0)
    {
        rem=n%2;
        rev=rev+rem*base;
        n=n/2;
        base=base*10;
        
    }
    cout<<endl;
    cout<<"AFTER CONVERTING TO BINARY:"<<rev<<endl;
}