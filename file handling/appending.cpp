//appending to an existing file
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("ex1.txt",ios::app);
    if(file.is_open())
    {
        file<<"Appended another text."<<endl;
        file.close();
        cout<<"Appended"<<endl;
    }
    else
    {
        cout<<"Error opening file"<<endl;
    }
}