#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    
}
int main()
{
    cout<<"enter the value of a and b"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"before swapping a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    cout<<"after swapping a = "<<a<<" b = "<<b<<endl;
}