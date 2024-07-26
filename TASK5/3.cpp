/*3. Create a class simplecalc which has two data members and functions for
operation +,-,* and /. Create class scientificcalc with one member and function
for calculating sin a, cos a and tan a. Derive a class hybrid from both the
classes and calculate (5*sin a + 2 * cos a).*/

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalc
{
protected:
    double num1, num2;

public:
    void setSimpleValues(double a, double b)
    {
        num1 = a;
        num2 = b;
    }

    double add()
    {
        return num1 + num2;
    }

    double subtract()
    {
        return num1 - num2;
    }

    double multiply()
    {
        return num1 * num2;
    }

    double divide()
    {
        if (num2 != 0)
            return num1 / num2;
        else
        {
            cout << "Division by zero is not allowed." << endl;
            return NAN;
        }
    }
};

class ScientificCalc
{
protected:
    double angle;

public:
    void setScientificValue(double a)
    {
        angle = a;
    }

    double sinValue()
    {
        return sin(angle);
    }

    double cosValue()
    {
        return cos(angle);
    }

    double tanValue()
    {
        return tan(angle);
    }
};

class Hybrid : public SimpleCalc, public ScientificCalc
{
public:
    double calculateExpression()
    {
        return 5 * sinValue() + 2 * cosValue();
    }
};

int main()
{
    Hybrid h;
    double angle;

    cout << "Enter angle in degrees: ";
    cin >> angle;
    h.setScientificValue(angle * M_PI / 180.0);

    cout << "Result of 5*sin(a) + 2*cos(a): " << h.calculateExpression() << endl;

    double num1, num2;
    cout << "Enter two numbers for simple calculations: ";
    cin >> num1 >> num2;
    h.setSimpleValues(num1, num2);

    cout << "Addition: " << h.add() << endl;
    cout << "Subtraction: " << h.subtract() << endl;
    cout << "Multiplication: " << h.multiply() << endl;
    cout << "Division: " << h.divide() << endl;

    return 0;
}
