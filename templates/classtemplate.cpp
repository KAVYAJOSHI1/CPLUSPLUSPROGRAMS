#include<iostream>
using namespace std;
template <class T>
class sub
{
    public:
    T min(T a,T b)
    {
        T ans=a-b;
        return ans;
    }
};
int main()
{
    sub<float> obj;
    cout << obj.min(5,4)<<endl;
    cout<<obj.min(8,6.95)<<endl;

}