#include<iostream>
using namespace std;
int main()
{
    char a[26];
    for(int i=0;i<26;i++)
    {
        a[i]='A'+i;
    }
    char* ptr=a;
    cout<<"ALPHABETS ARE:"<<endl;
    for(int i=0;i<26;i++)
    {
        cout<< *( ptr + i)<<" ";
    }
    cout<<endl;
}