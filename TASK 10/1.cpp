#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
    int a,b;
    cout<<"CALCULATOR"<<endl;
    int ch;
    try{
    cout<<"ENTER THE VALUE OF A"<<endl;
    cin>>a;
    cout<<"ENTER THE VALUE OF B"<<endl;
    cin>>b;
    while(true)
    {
      cout<<"ENTER 1 FOR ADDITION"<<endl;
      cout<<"ENTER 2 FOR SUBTRACTION"<<endl;
      cout<<"ENTER 3 FOR MULTIPLICATION"<<endl;
      cout<<"ENTER 4 FOR DIVISION"<<endl;
      cout<<"ENTER 5 FOR EXIT"<<endl;
      cin>>ch;
    
    switch(ch)
    {
        case 1:
           {
              cout<<"ADDITION IS"<<a+b<<endl;
              break;
           }

        case 2:
        {
            if(b>a)
            {
                throw runtime_error("b is greater than a");
            }
            else
            {
                cout<<"SUBTRACTION IS"<<a-b<<endl;
            }
            break;
        }
        case 3:
        {
            cout<<"MULTIPLICATION IS"<<a*b<<endl;
            break;
        }
        case 4:
        {
            if(b==0)
            {
                throw runtime_error("b cannot be zero");
            }
            else
            {
                cout<<"DIVISION IS"<<a/b<<endl;
            }
            break;
        }
        case 5:
        {
            cout<<"EXITTING"<<endl;
            return 0;
        }
        default:
        {
            cout<<"INVALID CHOICE"<<endl;
            break;
        }
    }
    }
    }
    catch(runtime_error e)
    {
        cout<<"Error: "<<e.what()<<endl;
    }

}