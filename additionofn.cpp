//Addition of first n numbers without using for loop

#include <iostream>
using namespace std;
class num
{
    int sum=0;
    int n;

public:
    num(int nu){
        n=nu;
    }

    void add(){
        sum=(n*(n+1))/2;
        }
    
        void display()
        {
            cout << sum;
        }


};
int main()
{
    int nu;
    cout<<"Enter the number:";
    cin>>nu;
    num obj(nu);
    obj.add();
    obj.display();
    return 0;
}