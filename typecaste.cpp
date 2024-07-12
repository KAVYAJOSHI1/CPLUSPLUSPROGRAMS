/*q6) write a program to accept float number and display the integer part using typecast operator*/
#include <iostream>
using namespace std;
int main()
{
    float n;
    cout << "Enter a float number: ";
    cin >> n;
    int intn = (int)n;
    cout << "The integer part of the number is: " << intn;
    return 0;
}