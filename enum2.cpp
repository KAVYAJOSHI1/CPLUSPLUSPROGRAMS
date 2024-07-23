#include<iostream>
using namespace std;

enum Supercars{Venom=301 ,Veryon=268,Valkyrie=240,Roadster=250};
int main()
{
    Supercars speed1;
    Supercars speed2;
    speed1=Valkyrie;
    speed2=Roadster;

    if(speed1>speed2)
    {
        cout<<"Valkyrie is faster than Roadster with the speed of "<<speed1<<endl;
    }
}
