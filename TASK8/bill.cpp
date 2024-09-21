#include<iostream>
#include<iomanip>
using namespace std;

void createbill(int quantities[],double costs[],int num_items)
{
    cout<<left<<setw(5)<<"Sr.No."<<setw(5)<<"Qty"<<setw(5)<<"Cost"<<setw(5)<<"Total"<<endl;

    for(int i=0;i<num_items;i++)
    {
        double total=quantities[i]*costs[i];
        cout<<left<<setw(5)<<i+1<<setw(5)<<quantities[i]<<setw(5)<<costs[i]<<setw(5)<<total<<endl;
    }
}
int main()
{
    int num_items=5;

    int quantities[num_items]={1,2,3,4,5};
    double costs[num_items]={10.0,20.0,30.0,40.0,50.0};
    createbill(quantities,costs,num_items);

    return 0;
}