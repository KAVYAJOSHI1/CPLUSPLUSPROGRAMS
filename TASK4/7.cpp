/*7. Demonstrate the concept of type conversion from basic type to class type. Create class
temperature with member Fahrenheit. Create constructor with one argument for type
conversion to celcius. In main() call with basic type.
*/

#include <iostream>
using namespace std;
class temperature
{
    float f;
    public:
    temperature(float x)
    {
        f=x;
    }
    void convert()
    {
        float c;
        c=(f-32)*5/9;
        cout<<c;
    }
};
int main()
{
    float x;
    cout<<"Enter the temperature in fahrenheit"<<endl;
    cin>>x;
    temperature obj(x);
    obj.convert();
}