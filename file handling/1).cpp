//To print the contents of the file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile;
    infile.open("file1.txt");
    string str;
    while(getline(infile,str))
    {
        cout<<str<<endl;
    }
    infile.close();
}