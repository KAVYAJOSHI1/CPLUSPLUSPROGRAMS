#include<iostream>
using namespace std;
struct person
{
    int a;
    string n;
};
void display(person* p)
{
    cout<<p->a<<endl;
    cout<<p->n<<endl;
}
int main()
{
person x;
cout<<"ENTER A"<<endl;
cin>>x.a;
cout<<"ENTER N"<<endl;
cin>>x.n;
person* pperson=&x;
display(pperson);
return 0;
}