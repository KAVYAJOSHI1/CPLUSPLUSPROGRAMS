//To print the contents of the file
//istream for input
//ostream for output
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream infile;
    infile.open("ex1.txt",ios::out);
    infile<<"This is india";
    infile.close();
}