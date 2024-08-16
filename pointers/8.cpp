#include<iostream>
#include<algorithm>
using namespace std;
void per(string a)
{
    sort(a.begin(),a.end());
    do
    {
     
    cout<<a<<endl;   
    }while(next_permutation(a.begin(),a.end()));
   
}
int main()
{
    string s;
    cout<<"ENTER THE STRING"<<endl;
    cin>>s;
    per(s);

}