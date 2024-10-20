#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
    int n;   
    cout <<"ENTER THE ARRAY SIZE"<<endl;
    cin>>n;
    try
    {
        int a[n];
        if(n>10)
        {
            throw runtime_error("INDEX OUT OF BOUNDS");
        }
        else
        {
            cout << "ENTER THE ARRAY ELEMENTS:"<<endl;
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            int min=a[0],max=a[0];
            for(int i=0;i<n;i++)
            {
                if(a[i]<min)
                {
                    min=a[i];
                }
            }
            
            for(int i=0;i<n;i++)
            {
                if(a[i]>max)
                {
                    max=a[i];
                }
            }
            cout << "MINIMUM AND MAXIMUM ELEMENTS ARE:"<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<endl;
            }
            cout<<"Minimum elements is:"<<min<<endl;
            cout<<"Maximum elements is:"<<max<<endl;

        }

    }
    catch (runtime_error e)
    {
        cout<<"ERROR:"<<e.what();
    }
    catch (...)
    {
        cout<<"UNEXPECTED ERROR";
    }

}
