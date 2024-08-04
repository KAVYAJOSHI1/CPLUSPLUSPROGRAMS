#include <iostream>
#include <string>
using namespace std;
class emp
{
    public:
    string name;
    int id;
    float salary;
    emp(){}
    emp(string a,int b,float c)
{
    name=a;
    id=b;
    salary=c;

}
display()
{
    cout<<"NAME IS:"<<name<<endl;
    cout<<"ID IS:"<<id<<endl;
    cout<<"SALARY IS:"<<salary<<endl;
}
};
int main()
{
    string a;
    int b;
    float c;
    emp obj[3];
    for(int i=0;i<3;i++)
    {
        cout<<"ENTER THE NAME:"<<endl;
        cin>>a;
        cout<<"ENTER THE ID:"<<endl;
        cin>>b;
        cout<<"ENTER THE SALARY:"<<endl;
        cin>>c;
        obj[i]=emp(a,b,c);
        obj[i].display();
    }
    return 0;
}
