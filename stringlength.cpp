#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the string: ";
    string str;
    getline(cin,str);
    
    str.push_back('J');
    str.append("OSHI");
    int x=str.length();
    cout << "STRING AFTER APPENDING IS: "<<str;
    cout << "LENGTH OF THE STRING IS:"<<x;
}