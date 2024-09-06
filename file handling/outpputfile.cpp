//To print the contents of the file
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