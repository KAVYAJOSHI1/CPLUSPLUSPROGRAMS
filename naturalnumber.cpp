/*q9) write a program to display 10 natural numbers starting from input given by the user*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"ENTER THE NUMBER:\n";
    cin>>n;
    cout<<"THE 10 NUMBERS ARE:\n";
    for(int i=0;i<10;i++)
    {
        
        if(n>0)
        {
            cout<<n<<endl;
            n++;
        }
        else
    {

        n=1;
        cout<<n<<endl;
        n++;
    }
    }
}
