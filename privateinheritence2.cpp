//to acces private member of  private class a in b
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
        
        cout<<b*get();
    }
};
int main(){
    B obj;
    obj.set(10,20);
    obj.display();
    return 0;
}