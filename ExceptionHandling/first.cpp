//to try catch throw
#include<iostream>
using namespace std;

int main()
{
    double num,den,frac;
    cout<<"ENTER THE NUMERATOR"<<endl;
    cin>>num;
    cout<<"ENTER THE DENOMINATOR"<<endl;
    cin>>den;
    try{
        if(den==0)
        {
            throw "DENOMINATOR CANNOT BE 0";
        }
        else
        {
           frac=num/den;
           cout<<"RESULT IS: "<<frac;
        }
    }
    catch(const char* e)
    {
      cout<<"Error: "<<e;
    }
}