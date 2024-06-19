//TO PRINT PRIME SERIES TILL 20 
#include <iostream>
using namespace std;
int main()
{
   cout<<"THE SERIES IS:\n";
    for(int i=0;i<20;i++)
    {
         int count=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
        {
        count++;
        }
        }
        if(count==1)
        {
            cout<<" "<<i;
        }
    }
    
}