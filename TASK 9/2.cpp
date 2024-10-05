#include<iostream>
#include<fstream>
#include<map>
#include<iomanip>
using namespace std;
int main()
{
    fstream file;
    map<string , long> m;
    string name;
    long no;
    
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the name";
        cin>>name;
        cout<<"Enter the number";
        cin>>no;
        m.insert({name,no});
    }

    file.open("Directory.txt",ios::out);
    file<<left<<setw(15)<<"Name"<<right<<setw(15)<<"Number"<<endl;
    for(auto i:m)
    {
        file<<left<<setw(15)<<i.first<<right<<setw(15)<<i.second<<endl;
    }
   
   
    file.close();

    file.open("Directory.txt",ios::in);
    string line;
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();

}