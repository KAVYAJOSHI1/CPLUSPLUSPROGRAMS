#include <iostream>

using namespace std;

class MyClass {
public:
    MyClass(int value) {
       if (value <= 0) {
            throw invalid_argument("Value must be positive");
       }
        cout<<"Constructor is created"<<endl;
       
        data = value;
        
         }
 ~MyClass()
        {
            cout<<"Destructor Called";
        }
private:
    int data;
};

int main() {
    try {
        MyClass obj(-5); // Throws an exception
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}