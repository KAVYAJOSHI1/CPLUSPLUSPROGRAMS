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
            throw runtime_error("DENOMINATOR CANNOT BE 0");
        }
        else
        {
           frac=num/den;
           cout<<"RESULT IS: "<<frac;
        }
    }
    catch(const runtime_error& e)
    {
      cout<<"Error: "<<e.what();
    }
}