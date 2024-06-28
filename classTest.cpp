//CLASS TIME WITH MEEMBERS HOUR ,MINUTE,SECOND .ALSO DEFINE FUNCTION SETTIME TO INITIALIZE THE MEMBERS.PRINT() TO DISPLAY THE TIME.DEMONSTRATE TIME FOR 2 OBJECTS.
#include <iostream>
using namespace std;
class Time{
    private:
    int hour,minute,second;
    public:
    void setTime(int h,int m,int s){
        hour=h;
        minute=m;
        second=s;
    }
    void print(){
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
};
int main()
{
    Time t1,t2;
    t1.setTime(10,20,30);
    t1.print();
    t2.setTime(20,30,40);
    t2.print();
    return 0;
}