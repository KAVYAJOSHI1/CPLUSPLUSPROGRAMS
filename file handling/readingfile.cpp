//using end of file
#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("ex1.txt",ios::in);
    if(file.is_open())
    {
    while(!file.eof())
    {
        string line;
        getline(file,line);
        cout<<line<<endl;
    }
    file.close();
    }
    else 
    {
        cout<<"Error opening file"<<endl;
    }

}