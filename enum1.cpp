#include<iostream>
using namespace std;

enum captain{Avi,Sid,Robby,Sami,Jake};
int main()
{
    captain c=Avi;
    if(c==Avi)
     {
        cout<<"Our captain is Avi and its value is :"<<Avi<<endl;
     }
     else
     {
        cout<<"He is not our captain"<<endl;
     }
     return 0;
}