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
    functionObj obj;
    cout<<obj(10,20);
}