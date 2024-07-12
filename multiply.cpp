/*q3) write a program to accept one integer data type and one float data type, multiply this two numbers and display result*/
#include <iostream>
using namespace std;
int main()
{
    int a;
    float b;
    cout << "Enter an integer number:";
    cin >> a;
    cout << "Enter a float number:";
    cin >> b;
    cout << "The product of two numbers is:" << a * b;
    return 0;
}