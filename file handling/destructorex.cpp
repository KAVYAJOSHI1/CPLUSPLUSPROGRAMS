#include <iostream>
#include <stdexcept>

using namespace std;

class MyClass {
public:
    ~MyClass() {
        cout << "Destructor called." << endl;
        // Throwing an exception inside the destructor (not recommended)
        throw runtime_error("Error in destructor.");
    }
};

int main() {
    try {
        MyClass obj;
        // Destructor will be called at the end of this scope, which throws an exception
    } catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    
    return 0;
}
