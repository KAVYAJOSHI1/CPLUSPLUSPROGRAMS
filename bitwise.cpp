/*a7) write a program to accept two numbers and write function to calculate AND, OR, XOR, of these two numbers, and not of the first number*/

#include <iostream>
using namespace std;
void convert(int a,int b)
{
    cout<<"THE AND OPERATION IS:\n"<<(a&b)<<endl;
    cout<<"THE OR OPERATION IS:\n"<<(a|b)<<endl;
    cout<<"THE XOR OPERATION IS:\n"<<(a^b)<<endl;
    cout<<"THE NOT OPERATION IS:\n"<<(~a)<<endl;
}
int main()
{
    int a,b;
    cout<<"ENTER THE TWO NUMMBERS:\n";
    cin>>a>>b;
    convert(a,b);
    return 0;
}