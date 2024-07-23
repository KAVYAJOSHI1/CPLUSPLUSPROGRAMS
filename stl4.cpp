#include<iostream>
using namespace std;
class functionObj
{

public:
int operator()(int x,int y)
{
    return x*y;
}
};
int main()
{
    functionObj fo;
    int mult=fo(10,20);
    cout<<"The product is :"<<mult<<endl;
}