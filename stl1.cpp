#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;

    for(int i=1;i<=10;i++)
    {
        v.push_back(i);
    }
    cout<<"Size of vector is :"<<v.size()<<endl;
    v.resize(7);
    cout<<"After resize, size of vector is :"<<v.size()<<endl;
    if(v.empty()==false)
    {
        cout<<"Vector is not empty"<<endl;
    }
    else
    {
        cout<<"Vector is empty"<<endl;
    }
    cout<<"ELEMENTS OF VECTOR ARE :"<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}
