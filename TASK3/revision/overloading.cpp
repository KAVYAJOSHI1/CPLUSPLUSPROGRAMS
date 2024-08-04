#include <iostream>

using namespace std;
  int volume(int a)
    {
        return a*a*a;
    }
     int volume(int l,int w,int h)
    {
        return l*w*h;
    }
    int volume(int r,int h)
    {
    return 3.14*r*r*h;
    }
    

int main()
{
  cout<<"ENTER SIDE"<<endl<<"ENTER THE LENGTH"<<endl<<"ENTER THE BREADTH"<<endl<<"ENTER THE HEIGHT"<<endl;
  int l,b,h,r;
  cin>>l>>b>>h>>r;
  cout<<volume(l,b,h)<<endl;
  cout<<volume(r,h)<<endl;
  cout<<volume(r)<<endl;  
  return 0;

  
}