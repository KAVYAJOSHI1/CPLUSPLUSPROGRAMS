#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void per(string str)
{
    char* cstr=&str[0];
    int len=str.length();
    sort(cstr,cstr + len);
    do
    {
     
    cout<<str<<endl;   
    }while(next_permutation(cstr,cstr + len));
   
}
int main()
{
    string s;
    cout<<"ENTER THE STRING"<<endl;
    cin>>s;
    per(s);

}