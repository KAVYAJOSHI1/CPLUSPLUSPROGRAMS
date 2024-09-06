//To print the contents of the file
//iftream for input
//ofstream for output

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    /*ofstream infile;
    infile.open("ex1.txt",ios::out);
    infile<<"This is india";
    infile.close();*/
    
    ifstream file;
    file.open("ex1.txt");
    char data[10];
    file>>data;
    file.getline( data,10);
    cout<<data;
    file.close();
    return 0;
}