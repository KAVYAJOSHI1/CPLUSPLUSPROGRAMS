#include<iostream>
using namespace std;
class a{
   int a;
   string b;
   public :
   set()
   {
      cout<<"ENTER VALUE OF A AND B";
      cin>>a>>b;
   }
   display()
   {
      cout<<a<<b;
   }

};
int main()
{
  a obj;
  obj.set();
  obj.display();
  a obj1;
  obj1.set();
  obj1.display();

}