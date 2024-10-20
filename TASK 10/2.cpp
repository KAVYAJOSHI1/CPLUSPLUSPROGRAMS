#include<iostream>
#include<stdexcept>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int sum;
    try
    {
      cout<<"ENTER THE NUMBER"<<endl;
      cin>>n;
      if(n<1||n>100)
      {
        throw runtime_error("ENTER BETWEEN 1 TO 100");
      }
      else
      {
        for(int i=1;i<=n;i++)
        {
            sum=sum+pow(i,2);
        }
      }
      cout<<"SUM OF SERIES IS:"<<sum;
    }
    catch(runtime_error e)
    {
        cout<<"ERROR: "<<e.what();
    }
}