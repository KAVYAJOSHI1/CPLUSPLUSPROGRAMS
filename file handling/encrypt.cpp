#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int shift;
    string in_file,en_file,de_file;
    char ch;

    cout<<"Enter a file name to encrypt: ";
    cin>>in_file;
    cout<<"Enter shift value for encryption: ";
    cin>>shift;

    en_file="en_"+in_file;
    ifstream i_file(in_file);
    ofstream o_file(en_file);
    if(i_file&&o_file)
    {
        while(i_file.get(ch))
        {
            if(isalpha(ch))
            {
                char base=islower(ch)?'a':'A';
                ch=(ch-base+shift)%26+base;
            }
            o_file<<ch;
        }
    }
    else
    {
        cout<<"Cannot open file.";
    }
    i_file.close();
    o_file.close();
    cout<<"File encrypted: "<<en_file<<endl;

    shift=26-shift;
    de_file="de_"+in_file;
    ifstream i_file1(en_file);
    ofstream o_file1(de_file);
    if(i_file1&&o_file1)
    {
        while(i_file1.get(ch))
        {
            if(isalpha(ch))
            {
                char base=islower(ch)?'a':'A';
                ch=(ch-base+shift)%26+base;
            }
            o_file1<<ch;
        }
    }
    else
    {
        cout<<"Cannot open file.";
    }
    i_file1.close();
    o_file1.close();
    cout<<"File decrypted: "<<de_file;
    return 0;
}