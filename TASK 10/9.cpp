#include<iostream>
#include<vector>
#include<algorithm>
#include<list>

using namespace std;

int main()
{
    vector<int> v={4,5,6,7,8,9};
    v.push_back(10);
    cout<<"After push back:"<<endl;
    for(int i:v)
    {
        cout<<i<<endl;
    }
    v.pop_back();
    cout<<"After pop back:"<<endl;
    for(int i:v)
    {
        cout<<i<<endl;
    }

    cout<<"Size of vector is :"<<v.size()<<endl;

    cout<<"Element at index 2 is :"<<v.at(2)<<endl;

    sort(v.begin(),v.end());
    for(int i:v)
    {
        cout<<i<<endl;
    }


    list<int> l={1,2,3,4,5};

    l.push_front(0);
    cout<<"After push front:"<<endl;
    for(int i:l)
    {
        cout<<i<<endl;
    }

    cout<<endl;

    l.push_back(6);
    cout<<"After push back:"<<endl;
    for(int i:l)
    {
        cout<<i<<endl;
    }

    l.pop_back();
    cout<<"After pop back:"<<endl;
    for(int i:l)
    {
        cout<<i<<endl;
    }

    l.pop_front();
    cout<<"After pop front:"<<endl;
    for(int i:l)
    {
        cout<<i<<endl;
    }

    l.reverse();
    cout<<"After reverse:"<<endl;
    for(int i:l)
    {
        cout<<i<<endl;
    }

}