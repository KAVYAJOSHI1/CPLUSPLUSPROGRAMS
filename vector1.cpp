#include <iostream>
#include <vector>
using namespace std;
 int main()
 {
  vector<int> v;
  v.assign(5,10);
  for(int i=0;i<v.size();i++)
  {
   cout<<v[i]<<endl;
  }
v.push_back(20);
  for(int i=0;i<v.size();i++)
  {
   cout<<v[i]<<endl;
  }
  v.pop_back();
  cout<<"Now the contents are:";
  for(int i=0;i<v.size();i++)
  {
   cout<<v[i]<<endl;
  }
  


 }
