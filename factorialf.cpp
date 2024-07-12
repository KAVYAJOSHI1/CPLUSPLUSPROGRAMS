/*q10) write a program to find factorial of a number using functions*/
#include <iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<fact(n);
    return 0;
}