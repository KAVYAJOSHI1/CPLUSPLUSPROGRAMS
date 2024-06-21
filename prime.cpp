#include <iostream>
using namespace std;
int prime(int n)
{
 int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"PRIME NUMBER";
}
else
{
    cout<<"NOT A PRIME NUMBER";
}
}
int main()
{
    int n;
    cout<<"ENTER THE NUMBER";
    cin>>n;
    prime(n);
    
}