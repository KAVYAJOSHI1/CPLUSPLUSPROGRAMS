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
        
        

        void getDay()
        {
            cout << "Enter day, month and year" << endl;
            cin >> day >> month >> year;
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
        void setDay()
        {
            cout << day << "/" << month << "/" << year << endl;
        }
};

int main()
{
    Date d;
    
    d.getDay();
    d.validate();
    d.setDay();
    return 0;
}

        