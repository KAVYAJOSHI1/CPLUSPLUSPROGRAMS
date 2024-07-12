/*q4) write a program to accept 3 numbers from users and display the greatest of them using conditional operator*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three numbers: \n";
    cin >> a >> b >> c;
    cout<<"THE MAXIMUM NUMBER IS:\n";
    cout << ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
}