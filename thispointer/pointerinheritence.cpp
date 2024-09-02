#include<iostream>
using namespace std;
class a
{
    public:
    int x;
   
  
    void display()
    {
        cout<<x<<endl;
    }


};
class b: public a
{
    public:
    int y;
   
    
    void display()
    {
        cout<<y<<endl;
    }
};
int main()
{
    a A;
    b B;
    a *aptr=&A;
    cout<<"Base class pointer"<<endl;
    aptr->x=5;
    aptr->display();
    aptr=&B;
    aptr->x=4;
    aptr->display();

    b *bptr=&B;
    bptr->y=7;
    bptr->display();
}