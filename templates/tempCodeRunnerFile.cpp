#include<iostream>
using namespace std;
template <class T1,class T2 >
T1 mul(T1 a,T2 b)  //as T1 is int answer wil be in int
{
    return a*b;
}
int main()
{
    cout<<mul(4,7.25)<<endl;
}