#include<iostream>
#include<fstream>
using namespace std;
int main()

{
    fstream file;
    file.open("Directory.txt",ios::in);
    cout<<"ENTER YOUR CHOICE"<<endl;
    int choice;
    while(true)
    {
    cout<<"ENTER 1 TO DISPLAY 2ND AND 4TH OBJECT"<<endl;
    cout<<"ENTER 2 TO UPDATE TNO OF 3RD OBJECT"<<endl;
    cout<<"ENTER 3 TO ADD TWO MORE OBJECTS TO FILE"<<endl;
    cout<<"ENTER 4 TO GET NUMBER OF OBJECTS IN THE FILE"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
        
    }
    }
}