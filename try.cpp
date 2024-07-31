#include <iostream>
using namespace std;
class a
{
   public :
   int x,sum,b;
   A(int y,int z)
   {
      x=y;
      b=z;
   }
   void operator +()
   {
sum=b+x;
   }
  
   void show()
   {
      cout<<sum;
   }

};
int main()
{
   a A(5,11);
   +A();
   A.show();
   
}