#include<iostream>
using namespace std;
class Time
{
    int hour,minute,n;
    public:
     Time(int x)
    {
        n=x;
    }
    void setTime()
    {
        hour=n/60;
        minute=n%60;
    }
    void display()
    {
        cout << hour<<":"<<minute<<endl;
    }
};

int main()
{
    Time t1(450);
    t1.setTime();
    t1.display();
}