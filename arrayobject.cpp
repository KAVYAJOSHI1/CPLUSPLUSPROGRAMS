//TO USE ARRAY IN OBJECT

#include <iostream>
using namespace std;
class A{
    public:
    int a;
    string name;
    void getdata(){
        cin>>a>>name;
    }
    void display(){
        cout<<a<<" "<<name;
    }
};

int main()
{
    A obj[3];
    for(int i=0;i<3;i++){
        obj[i].getdata();
    }
    for(int i=0;i<3;i++){
        obj[i].display();
    }
}