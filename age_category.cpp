#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin>>age;
    if(age>0&&age<12)
    cout<<"KID";
    else if(age>12 && age <20)
    cout<<"TEEN";
    else
    cout<<"ADULT";
}