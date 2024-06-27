#include <iostream>
using namespace std;
inline int cube(int n)
{
  return n*n*n;
}
int main()
{
    int n;
    cout<<"ENTER THE VALUE";
    cin>>n;
    cout<<"CUBE IS:"<<cube(n);
    return 0;
}
