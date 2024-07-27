/*4. Create a Book class with attributes for title, author, and price. Implement a
copy constructor to create a new book object as a copy of an existing one.
Show the working of the copy constructor by copying a book object*/
#include <iostream>
using namespace std;
class Book
{
    string title;
    string author;
    float price;
public:
    Book(string t, string a, float p)
    {
        title = t;
        author = a;
        price = p;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{
    string title, author;
    float price;
    cout << "Enter title, author, and price: ";
    cin >> title >> author >> price;
    Book b(title, author, price);
    b.display();
    Book newbook(b);
    newbook.display();
    return 0;
}