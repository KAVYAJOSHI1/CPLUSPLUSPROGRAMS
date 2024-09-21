#include<iostream>
using namespace std;
struct bill
{
    int srno;
    int qty;
    double cost;
};
int main()
{
    int n;
    cout<<"Number of items in cart: ";
    cin>>n;
    bill Bill[n];
    cout<<"Enter item in cart: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Item "<<i+1<<":"<<endl;
        cout<<"Enter SrNo: ";
        cin>>Bill[i].srno;
        cout<<"Enter Quantity: ";
        cin>>Bill[i].qty;
        cout<<"Enter Cost: ";
        cin>>Bill[i].cost;
    }
    cout.width(5);
    cout<<left<<"SrNo";
    cout.width(5);
    cout<<left<<"Qty";
    cout.width(5);
    cout<<left<<"Cost";
    cout.width(5);
    cout<<left<<"Total"<<endl;
    for(int i=0;i<n;i++)
    {
        cout.width(5);
        cout<<left<<Bill[i].srno;
        cout.width(5);
        cout<<left<<Bill[i].qty;
        cout.width(5);
        cout<<left<<Bill[i].cost;
        cout.width(5);
        cout<<left<<Bill[i].qty*Bill[i].cost<<endl;
    }
    return 0;
}