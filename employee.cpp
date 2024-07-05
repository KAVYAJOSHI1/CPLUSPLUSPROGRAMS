//USING STATIC VARIABLER
#include <iostream>
using namespace std;
class employee  
{
    int id;
    static int count;
    public:
    void data(void)
    {
        cout<<"\nENTER ID\n";
        cin>>id;
        count++;
    }
    void display(void)
    {
        cout<<"\nTHE ID OF EMPLOYEE IS\n"<<id;
        cout<<"\nTHE COUNT IS\n"<<count;
    }
};
int employee::count=0;
int main()
{
    employee e1,e2;
    e1.data();
    e1.display();
    e2.data();
    e2.display();
}