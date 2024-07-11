#include<iostream>
using namespace std;
class Time
{
    int hrs,min;
    public:
     Time(int a,int b)
    {
        hrs=a;
        min=b;
    }
   operator int()
   {
    cout<<"OUTPUT";
    return (hrs*60+min);
   }
};

int main()
{
   int h,m,duration;
   cout<<"ENTER HOURS";
   cin >> h;
   cout << "ENTER MIN";
   cin >> m;
   Time t(h,m);
   duration=t;
   cout<<"TOTAL MINUTES ARE"<<duration<<endl;
}