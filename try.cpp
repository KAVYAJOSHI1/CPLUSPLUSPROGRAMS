#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    string line;
   ifstream file;
   file.open("try.txt",ios::in);
   getline(file,line);
   cout<<line;
   file.close();
}