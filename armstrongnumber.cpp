//PROGRAM TO FIND AN ARMSTRONG NUMBER
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout <<"ENTER THE NUMBER:\n";
    cin >>n;
    int n1=n;
    int n2=n;
    int count=0;
    while(n1>0)
    {
        int rem=n1%10;
        count++;
        n1=n1/10;

    }
    int sum=0;
    while(n2>0)
    {
        int rem=n2%10;
        int a=pow(rem,count);
        sum=sum+a;
        n2=n2/10;
    }
    cout<<sum;
    if(n==sum)
    {
        cout<<"ARMSTRONG NUMBER\n";
    }
    else{
        cout<<"NOT ARMSTRONG NUMBER\n";
    }
}