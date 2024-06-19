//153=1+125+27
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE NUMBER:\n";
    cin>>n;
    int temp=n;
    int sum=0;
    while(temp!=0)
    {
        int rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(sum==n)
    {
        cout<<"THE NUMBER IS ARMSTRONG";
    }
    else
    {
        cout<<"THE NUMBER IS NOT ARMSTRONG";
    }

}