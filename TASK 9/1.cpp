#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("example.txt");
    file<<"Open-source software is computer software that is released under a license in which the copyright holder grants users the rights to use,"
<<"study, change, and distribute the software and its source code to anyone and"
<<"for any purpose. Open-source software may be developed in a collaborative,"
<<"public manner";
file.close();
}
