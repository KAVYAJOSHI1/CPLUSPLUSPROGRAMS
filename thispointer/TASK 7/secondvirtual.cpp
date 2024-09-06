#include<iostream>
using namespace std;
class Animal
{

public:
virtual void makeSound()
{
    cout<<"Some generic animal sound";
}
};
class Dog: public Animal
{
    public:
    void makeSound()
    {
        cout<<"Woof! Woof!";
    }
};
class Cat: public Animal
{
    public :
    void makeSound()
    {
        cout<<"Meow! Meow!";
    }
};
int main()
{
    Animal* animal[2];
    animal[0] = new Dog();
    animal[1] = new Cat();
    for(int i=0;i<2;i++)
    {
        animal[i]->makeSound();
    }
    return 0;
}