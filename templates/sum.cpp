#include<iostream>
using namespace std;
template <typename T>
T sum(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<sum(4,5)<<endl;
    cout<<sum(4.56,4.8)<<endl;
}