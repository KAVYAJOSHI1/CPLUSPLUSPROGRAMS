#include<iostream>
using namespace std;

int main()
{
    enum color{red,blue,green,yellow};
    color c=yellow;
    switch(c)
    {
        case red:
            cout<<"red";
            break;
        case blue:
            cout<<"blue";
            break;
        case green:
            cout<<"green";
            break;
        case yellow:
            cout<<"yellow";
            break;
    }
}