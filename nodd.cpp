/*q11) write a program to display first n odd numbers from the input giver by the user*/

#include <iostream>
using namespace std;
int main()
{
    int n,odd;
    cout<<"ENTER THE NUMBER TO START FROM:\n";
    cin>>n;
    cout<<"ENTER THE ODD NOS TO BE PRINTED:\n";
    cin>>odd;
    cout<<"ODD NUMBERS ARE:\n";
    for(int i=n;i<n+(odd*2);i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
    
}