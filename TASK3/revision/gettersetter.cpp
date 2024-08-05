#include<iostream>
using namespace std;
class employee
{
    private:
    string name;
    public:
   void setname(string a)
   {
     name=a;
   }
   string getname()
   {
    return name;
   }


};
class department:public employee
{
    public:
    display()
    {
        cout<<getname();
    }

};
int main()
{
    department obj;
    obj.setname("KAVYA");
    obj.display();
}