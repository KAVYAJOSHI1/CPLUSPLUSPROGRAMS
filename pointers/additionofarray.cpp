//addition of array elements using pointers
#include <iostream>
using namespace std;

class sum{
    int i;
    public:
    sum(){

}

    void add(int arr[],int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        cout<<"sum of array elements is : "<<sum<<endl;
    }

};
int main()
{
    sum obj();
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *p=&obj;
    p.add(arr,n);
    

}