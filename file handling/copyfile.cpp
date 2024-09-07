//TO COPY CONTENTS FROM ONE FILE TO ANOTHER FILE
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file1("one.txt",ios::in);
    ofstream file2("two.txt",ios::out);
    if(file1.is_open() && file2.is_open())
    {
        string line;
        while(getline(file1,line))
        {
            file2<<line<<endl;
        }
        file1.close();
        file2.close();
    }
    else
    {
        cout<<"Error opening file"<<endl;
    }
    return 0;
}
    