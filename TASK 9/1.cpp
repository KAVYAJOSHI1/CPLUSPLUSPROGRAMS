#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("example.txt",ios::out);
    file<<"Open-source software is computer software that is released under a license in which the copyright holder grants users the rights to use,"
<<"study, change, and distribute the software and its source code to anyone and"
<<"for any purpose. Open-source software may be developed in a collaborative,"
<<"public manner";
file.close();
file.open("example.txt",ios::in);
file.seekg(50,ios::beg);
string content;
while(getline(file,content))
{
    cout<<content<<endl;
}
file.close();
cout<<"endl";

file.open("example.txt",ios::in);
file.seekg(0,ios::beg);
char buffer[51];
file.read(buffer,50);
buffer[50]='\0';
cout<<buffer<<endl;
file.close();
cout<<"endl";

file.open("example.txt",ios::in);
file.seekg(15,ios::cur);

while(getline(file,content))
{
    cout<<content<<endl;
}
file.close();




file.open("example.txt",ios::in);
file.seekg(0,ios::end);
file.seekg(-20,ios::cur);
cout<<endl;


while(getline(file,content))
{
    cout<<content<<endl;
}
file.close();

return 0;
}


