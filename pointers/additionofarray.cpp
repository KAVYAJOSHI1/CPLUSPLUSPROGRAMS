//addition of array elements using pointers
#include <iostream>
using namespace std;

class sum{
    int x;
    public:
    sum(int n){
        x=n;

}

    void add(int arr[]){
        int sum=0;
        for(int i=0;i<x;i++){
            sum+=arr[i];
        }
        cout<<"sum of array elements is : "<<sum<<endl;
    }

};
int main()
{
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;

    sum obj(n);
    
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum *p=&obj;
    p->add(arr);
    

}