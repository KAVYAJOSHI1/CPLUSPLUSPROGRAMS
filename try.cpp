#include<iostream>
using namespace std;
int swap(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
int main()
{
    int a,b;
    cout<<"ENTER VALUE OF A AND B:"<<endl;
    cin>>a;
    cin>>b;
    swap(&a,&b);
   cout<< a << b;

}