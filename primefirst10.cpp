#include <iostream>
using namespace std;
int main()
{
    int count=0 ,count1=0;
   
        
    for(int i=1;count1<10;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
    
     if(count==2)
     {
        count1++;
        cout<<i<<"\n";
     }
        }
    }

    
