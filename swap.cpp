/*q5) write a program to swap two integers without using temporary variable*/

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Swapped numbers are "<<a<<" and "<<b<<endl;
    return 0;
}