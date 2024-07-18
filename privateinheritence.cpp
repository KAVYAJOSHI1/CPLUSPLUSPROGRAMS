//to acces private member of class a in b
//Private members can be accessed through functions

#include <iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    int b;
    void set(int x,int y){
        a=x;
        b=y;
    }
    int get(){
        return a;
        
    }
};
class B:public A{
    public:
    void display(){
        set(10,20);
        cout<<b*get();
    }
};
int main(){
    B obj;
    
    obj.display();
    return 0;
}