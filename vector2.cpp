#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>num;
    for(int i=0;i<=5;i++)
    {
        num.push_back(i);
    }
    cout<<"Output"<<endl;
    for(auto a=num.begin();a!=num.end();a++)
    {
        cout<<*a<<endl;
    }
}
