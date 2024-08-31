/*Write a program to create class template class array.
 Create constructor initialise array, display function to display the values and 
 overload operator to overload the operator +,
  to add to arrays while adding check the size of both arrays*/

  #include<iostream>
  #include<stdexcept>
  using namespace std;

  template <typename T>
  class Array
{
    public :
    int size;
    T* a;

    Array(int s)
    {
        size=s;
        a=new T[size];
    }
    void setvalue()
    {
        for(int i=0;i<size;i++)
        {
            cout<<"ENTER THE ELEMENT"<<i+1<<":";
            cin>>a[i];
        }
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<a[i]<<endl;
        }
    }
    Array operator+(const Array& other)const{
        if(size !=other.size)
        {
            throw invalid_argument("ARRAY SIZE DOES NOT MATCH");
        }

        Array result(size);
        for(int i=0;i<size;i++)
        {
            result.a[i]=a[i]+ other.a[i];
        }
        return result;
    }
};

  int main()
  {
   int size;
   cout<<"ENTER THE SIZE:";
   cin>>size;
   Array<int> a1(size);
   Array<int> a2(size);

   cout<<"ENTER THE ELEMENTS FOR THE FIRST ARRAY:";
   a1.setvalue();

   cout<<"ENTER THE ELEMENTS FOR THE SECOND ARRAY:";
   a2.setvalue();

   Array<int> result=a1+a2;

   result.display();
   return 0;

  }



