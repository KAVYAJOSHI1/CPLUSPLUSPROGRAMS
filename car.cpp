//Write a program to create clas car having data members company and topspeed,create memeber functions set data() and displaydata() and create two object of the car.


#include <iostream>
using namespace std;

class car
{
    public:
    string company;
    int topspeed;
    public:
    void setdata()
    {
        cout<<"Enter the company name"<<endl;
        cin>>company;
        cout<<"Enter the top speed"<<endl;
        cin>>topspeed;

    }
    void displaydata()
    {
        cout<<"The company name is "<<company<<endl;
        cout<<"The top speed is "<<topspeed<<endl;
    }
};
    int main()
    {
        car c1,c2;
        c1.setdata();
        c1.displaydata();
        c2.setdata();
        c2.displaydata();
        return 0;
    }
