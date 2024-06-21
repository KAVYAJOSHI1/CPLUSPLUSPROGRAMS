#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"ENTER TWO NUMBERS:";
    cin>>a>>b;
    cout<<"ENTER + - * /";
    char c;
    cin>>c;
    switch(c)
    {
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
        default:
        cout<<"INVALID INPUT";
    }
}