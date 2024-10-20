#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
    string name;
    int age;
    string gender;
    try
    {
        cout<<"ENTER THE NAME"<<endl;
        cin>>name;
        cout<<"ENTER THE AGE"<<endl;
        cin>>age;
        cout<<"ENTER THE GENDER"<<endl;
        cin>>gender;
        if(age<18)
        {
            throw runtime_error("AGE SHOULD BE MORE THAN 18");
        }
        else
        cout<<"PERSON IS ELEGIBLE"<<endl;
    
    }
    catch(runtime_error e)
    {
        cout<<"ERROR:"<<e.what()<<endl;
    }
}