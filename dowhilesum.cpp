//Write a program that uses a do-while loop to calculate the sum of numbers entered by the
//user until the user enters a negative number.
#include <iostream>
using namespace std;

int main()
{
    int n=0;;
    int sum=0;
    do
    {
        cout<<"Enter a number: ";
        cin>>n;
        sum=sum+n;
    }while(n>0);
    cout<<"SUM is:"<<sum;
    
    
  
}
