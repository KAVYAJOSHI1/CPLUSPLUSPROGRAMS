/*q2) write a program to accept the distance between two cities in kilometres and write a function to calculate distance in meters, feet, cm, and inches*/
#include <iostream>
using namespace std;
void convert(int distance)
{
    cout<<"distance in meters="<<distance*1000<<endl;
    cout<<"distance in feet="<<distance*3280<<endl;
    cout<<"distance in cm="<<distance*100<<endl;
    cout<<"distance in inches="<<distance*39370<<endl;
}
int main()
{
    int distance;
    cout<<"enter the distance between two cities in kilometres"<<endl;
    cin>>distance;
    convert(distance);
}