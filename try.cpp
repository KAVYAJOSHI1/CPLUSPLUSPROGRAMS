#include<fstream>
#include<iostream>
using namespace std;
int main()
{
   ofstream file;
   file.open("try.txt");
   file<<"Hello";
   file.close();
   
}