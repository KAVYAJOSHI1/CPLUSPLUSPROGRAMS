#include <iostream>
using namespace std;

class BankAccount
{
    int account_number;
    string account_holder_name;
    float balance;

public:
    BankAccount(int a, string b, float c)
    {
        account_number = a;
        account_holder_name = b;
        balance = c;
    }

    void deposit()
    {
        int deposit_amount;
        cout << "ENTER THE AMOUNT TO BE DEPOSITED: ";
        cin >> deposit_amount;
        balance += deposit_amount;
        cout << "AMOUNT DEPOSITED SUCCESSFULLY\n";
    }

    void withdrawal()
    {
        int withdrawal_amount;
        cout << "ENTER THE AMOUNT TO BE WITHDRAWN: ";
        cin >> withdrawal_amount;
        if (withdrawal_amount > balance)
        {
            cout << "INSUFFICIENT BALANCE\n";
        }
        else
        {
            balance -= withdrawal_amount;
            cout << "AMOUNT WITHDRAWN SUCCESSFULLY\n";
        }
    }

    void display()
    {
        cout << "THE ACCOUNT NUMBER IS: " << account_number << endl;
        cout << "THE ACCOUNT HOLDER NAME IS: " << account_holder_name << endl;
        cout << "THE BALANCE IS: " << balance << endl;
    }
};

int main()
{
    int a, choice;
    float c;
    string b;

    cout << "Enter the account number: ";
    cin >> a;
    cout << "Enter the account holder name: ";
    cin >> b;
    cout << "Enter the balance: ";
    cin >> c;

    BankAccount obj(a, b, c);

    while (true)
    {
        cout << "ENTER 1 TO DEPOSIT\n";
        cout << "ENTER 2 TO WITHDRAW\n";
        cout << "ENTER 3 TO DISPLAY\n";
        cout << "ENTER 4 TO EXIT\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.deposit();
            break;
        case 2:
            obj.withdrawal();
            break;
        case 3:
            obj.display();
            break;
        case 4:
            return 0;
        default:
            cout << "INVALID CHOICE\n";
        }
    }

    return 0;
}
