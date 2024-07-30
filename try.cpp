#include <iostream>
using namespace std;
class a
{
   public :
   int x;
   a(int v)
   {
 x=v;
 
   }
   a(a &y)
   {
      cout<<"COPY CONSTRUCTOR"<<endl;
      x=y.x;
      
   }
   void show()
   {
      cout<<x;
   }

};
int main()
{
   a A(5);
   A.show();
   a B(A);
   B.show();
}