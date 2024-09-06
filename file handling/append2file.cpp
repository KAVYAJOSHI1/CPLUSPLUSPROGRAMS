#include<iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file1,file2;
    ofstream file3;
    file1.open("one.txt",ios::out);
    file2.open("two.txt",ios::out);
    file3.open("three.txt",ios::app);
    
    if(file1.is_open())
    {
        string line;
        while(getline(file1,line))
        {
            file3<<line<<endl;
        }
        file1.close();
    }
    else{
        cout<<"Error opening file";
    }if(file2.is_open())
    {
        string line;
        while(getline(file2,line))
        {
            file3<<line<<endl;
        }
        file2.close();
    }
    else
    {
        cout<<"Error opening file";
    }

    file3.close();
    cout<<"Completed merging files"<<endl;
    return 0;


}