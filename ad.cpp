//To add two num through casting operator
#include <iostream>
using namespace std;
class ad
{
    int a;
    int b;
    
    public:
    ad(int x,int y)
    {
       a=x;
       b=y;
    }
    operator int()
    {
        cout<<"OUTPUT:";
        return (a+b);
    }
};
int main()
{
    int x,y,sum;
    cout <<"ENTER NUMBER 1:"<<endl;
    cin>>x;
    cout<<"ENTER NUMBER 2:"<<endl;
    cin>>y;
    ad obj(x,y);
    sum=obj;
    cout<<"THE SUM IS:"<<endl<<sum;


}