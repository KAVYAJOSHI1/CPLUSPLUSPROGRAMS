/*7. Write a C++ program to implement a class called Date that has private member variables for
day, month, and year. Include member functions to set and get these variables, as well as to
validate if the date is valid and print proper message if date is invalid.
*/

#include <iostream>
using namespace std;
class Date
{
    private:
        int day, month, year;
    public:
        
        

        void setDay()
        {
            cout << day << "/" << month << "/" << year << endl;
        }

        void validate()
        {
            if (day < 1 || day > 31)
            {
                cout << "Invalid day" << endl;
            }
            if (month < 1 || month > 12)
            {
                cout << "Invalid month" << endl;
            }
            if (year < 1)
            {
                cout << "Invalid year" << endl;
            }
        }
        void getDay()
        {
            cout << day << "/" << month << "/" << year << endl;
        }
};

int main()
{
    Date d;
    
    d.setDay();
    d.validate();
    d.getDay();
    return 0;
}

        