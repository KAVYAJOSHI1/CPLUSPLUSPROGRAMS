#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class Directory
{
    public:
    string name;
    long no;
    void input()
    {
    
        cout<<"Enter the name";
        cin>>name;
        cout<<"Enter the number";
        cin>>no;
    
    }
   

};
int main()
{
    Directory d[5];
    for(int i=0;i<5;i++)
    {
     d[i].input();
    }
    fstream file;
    file.open("Directory.txt",ios::out);
    file<<left<<setw(15)<<"Name"<<right<<setw(15)<<"Number"<<endl;
    for(int i=0;i<5;i++)
    {
        file<<left<<setw(15)<<d[i].name<<right<<setw(15)<<d[i].no<<endl;
    }
    file.close();
   
   file.open("Directory.txt",ios::in);
     string line;
    cout << "\nFile Content: \n";
    while (getline(file, line)) {
        cout << line << endl;  // Output the file content
    }
    file.close();

  

}