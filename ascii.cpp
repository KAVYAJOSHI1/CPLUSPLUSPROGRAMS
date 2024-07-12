/*q8) write a program to accept a number and display its equivalent ascii value.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The ascii value is : " << char(n);
}