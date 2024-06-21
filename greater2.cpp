#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"ENTER THE NIUMBER\n";
    cin>>a;
    if(a>15)
    {
        cout<<"GREATER THEN 15\n";
        
    }
    else if(a>5 && a<15)
    {
        cout<<"GREATER THEN 5 AND LESS THEN 15\n";
    }
    else{
        cout<<"LESS THEN 5\n";
    }
}