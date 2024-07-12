//Type COnversion from class to class

#include <iostream>
using namespace std;
class Library;
class Book
{
    int id ;
    float price;
    public:
      Book(int i,float p)
      {
        id =i;
        price=p;
      } 
      void display()
      {
        cout<<"ID: "<<id<<"Price: "<<price;
      }
      int getid()
      {
        return id;
      }
      float getprice()
      {
        return price;
      } 
      operator float()
      {
        return price;
      }
};
class Library
{
    int bookid;
    float totalprice;
    public:
      Library()
      {
        bookid =0;
        totalprice=0.0;
      } 
      void display()
      {
        cout<<"ID: "<<bookid<<"Price: "<<totalprice;
      }
      Library(Book b)
      {
        bookid=b.getid();
        totalprice=b.getprice();
      }
      };
      int main()
      {
        Book b(1,100);
        Library lib1;
        float bookPrice=b;
        lib1=b;
        cout<<"Book Details:\n";
        b.display();
        cout<<"\nLibrary Details:\n";
        lib1.display();
        return 0;
      }