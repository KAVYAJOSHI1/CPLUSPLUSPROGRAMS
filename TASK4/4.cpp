/*4. Write a program to create class Distance with members feet and inches. Overload the unary
operator decrementor(--) where it will decrement the value of feet and inches by 1 by both
(i) operator overloading and (ii) Friend function . Write a display() function to print valid
measure of feet and inches.
*/
#include <iostream>
#include <math.h>
using namespace std;
class Distance
{
    int feet;
    int inches;
    public:
    Distance(int f,int i)
    {
        feet =f ;
        inches = i;
    }
    void operator --()
    {
        --feet;
        --inches;
    }
    void display()
    {
        cout<<feet<<" "<<inches<<endl;
    }
};
int main()
{
    int f,i;
    cout<<"Enter feet and inches"<<endl;
    cin>>f>>i;
    Distance d1(f,i);
    --d1;
    d1.display();
    return 0;
}