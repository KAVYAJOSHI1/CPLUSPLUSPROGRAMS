#include <iostream>
using namespace std;
class a
{
int b=5;
public:
 void display();
};
void  a::display()
{
    cout<<b;
}
int main()
{
    a obj;
    obj.display();
}