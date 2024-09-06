//to add text to a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("ex1.txt");
    if(file.is_open())
    {
    file<<"This is another text"<<endl;
    }
    file.close();
}