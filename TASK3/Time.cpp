#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;
public:
    void setTime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void display()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }
    friend Time operator+(Time t1, Time t2)
    {
        Time t3;
        t3.hour = t1.hour + t2.hour;
        t3.minute = t1.minute + t2.minute;
        t3.second = t1.second + t2.second;
        if (t3.second >= 60)
        {
            t3.second -= 60;
            t3.minute++;
        }
        if (t3.minute >= 60)
        {
            t3.minute -= 60;
            t3.hour++;
        }
        if (t3.hour >= 24)
        {
            t3.hour -= 24;
        }
        return t3;
    }
};

int main()
{
    Time t1, t2, t3;
    t1.setTime(10, 20, 30);
    t2.setTime(20, 30, 40);
    t3 = t1 + t2;
    t3.display();
    return 0;
}