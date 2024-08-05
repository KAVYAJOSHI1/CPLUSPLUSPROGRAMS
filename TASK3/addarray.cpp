//to add two array using operator overloading
#include<iostream>
using namespace std;
class array
{
    int arr[10];
    public:
    array()
    {
        for(int i=0;i<10;i++)
        {
            arr[i]=0;
        }
    }
    array operator+(array obj)
    {
        array temp;
        for(int i=0;i<10;i++)
        {
            temp.arr[i]=arr[i]+obj.arr[i];
        }
        return temp;
    }
    void setvalue()
    {
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
    }
    void display()
    {
        for(int i=0;i<10;i++)
        {
            cout<<arr[i]<<" ";
        }
    }    
};
int main()
{
    array obj1,obj2,obj3;
    obj1.setvalue();
    obj2.setvalue();
    obj3=obj1+obj2;
    obj3.display();
    return 0;
}