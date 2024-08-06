//TO USE ARRAY IN OBJECTS sum of 2 arrays using object

#include<iostream>
using namespace std;

class Array
{

    int arr[3];
    public:

    Array()
    {
        for(int i=0;i<3;i++)
        {
            arr[i]=0;
        }
    }

    Array operator+(Array obj)
    {
        Array temp;
        for(int i=0;i<3;i++)
        {
            temp.arr[i]=arr[i]+obj.arr[i];
        }
        return temp;
    }

    void setvalue()
    {
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
    }

    void display()
    {
        for(int i=0;i<3;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    ~Array()
    {
        cout<<"DESTROYED";
    }

};

int main()
{    
    Array arr[3];  

    for(int i=0;i<3;i++)
    {
        arr[i].setvalue();
    }

    Array temp;

    for(int i=0;i<3;i++)
    {
        temp=temp+arr[i];
    }
    temp.display();
    
 


}   