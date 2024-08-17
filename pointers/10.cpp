#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    const char *ptr;
    cout<<"enter the string";
    int len=0;
    cin>>str;
    ptr=str.c_str();
    while(*ptr !='\0')
    {
        len++;
        ptr++;
    }
    cout<<len;




}