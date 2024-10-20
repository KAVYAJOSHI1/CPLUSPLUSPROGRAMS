#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template <typename T>
void sort(T arr[],int n)
{
sort (arr,arr+n);
}

template <typename T>
void display(T arr[],int n)
{
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
}
int main()
{
    int inta[]={5,1,8,6,2};
    int intsize=sizeof(inta)/sizeof(inta[0]);
    sort(inta , intsize);
    display(inta,intsize);

    float floata[]={5.5,1.5,8.5,6.5,2.5};
    int floatsize=sizeof(floata)/sizeof(floata[0]);
    sort(floata , floatsize);
    display(floata,floatsize);

    char chara[]={'a','b','c','d','e'};
    int charsize=sizeof(chara)/sizeof(chara[0]);
    sort(chara , charsize);
    display(chara,charsize);

    return 0;

}