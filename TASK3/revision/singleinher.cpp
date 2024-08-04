#include<iostream>
#include<string>
using namespace std;
class Animal
{
    public:
    string name;
    int age;
    Animal(string a,int n)
    {
        name=a;
        age=n;
    }
    void display()
    {
cout<<"NAME IS: "<<name<<endl;
cout<<"AGE IS: "<<age<<endl;
    }
};
class Dog:public Animal
{
    public:
    string breed;
    Dog(string a,int n,string m):Animal(a,n)
    {
        breed=m;
    }
    void display()
    {
        Animal::display();
        cout<<"THE BREED IS:"<<breed<<endl;
    }

};
int main()
{
    Dog obj("BULL DOG",3,"BULL");
    obj.display();
}