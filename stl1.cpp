#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;

    for(int i=1;i<=10;i++)
    {
        v.pushback(i);
    }
    cout<<"Size of vector is :"<<v.size()<<endl;
}
