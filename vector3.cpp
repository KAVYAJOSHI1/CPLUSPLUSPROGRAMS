#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    for(int x=0;x<=10;x++)
    {
        v.push_back(x);
    }
    cout<<"Vector size : "<<v.size()<<endl;
    cout<<"Vector capacity : "<<v.capacity()<<endl;
    cout<<"Vector max_size : "<<v.max_size()<<endl;
    
    }