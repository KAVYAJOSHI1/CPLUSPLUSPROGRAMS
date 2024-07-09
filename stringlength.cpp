#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the string: ";
    string str;
    getline(cin,str);
    int x=str.length();
    cout << "LENGTH OF THE STRING IS:"<<x;
}