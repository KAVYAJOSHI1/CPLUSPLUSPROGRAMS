/*8. Write a program for creating friend function for the concatenation to two strings.*/
#include <iostream>
#include <string.h>
using namespace std;
class concat
{
    string s1, s2;
    public:
    concat(string s1, string s2)
    {
        this->s1 = s1;
        this->s2 = s2;
    }
    friend void display(concat);
};
void display(concat c)
{
    cout << c.s1 << c.s2;
}
int main()
{
    string s1, s2;
    cout << "Enter two strings: ";
    cin >> s1 >> s2;
    concat c(s1, s2);
    display(c);
    return 0;
}