#include<iostream>
using namespace std;
class object
{
   public:
   int a;
   void  get()
   {
     
      cout<<"ENTER";
      cin>>a;
   }
   void display()
   {
      cout<<a;
   }
};
int main()
{
   object obj[3];
   for(int i=0;i<3;i++)
   {
      obj[i].get();

   }
   for(int i=0;i<3;i++)
   {
      obj[i].display();
   }
   
   

}