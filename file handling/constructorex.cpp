#include <iostream>
#include <stdexcept> // For standard exceptions like std::runtime_error

using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called." << endl;
        // Simulating an error during object construction
        throw runtime_error("Error in constructor: Object creation failed.");
    }
};

int main() {
    try {
        MyClass obj; // Constructor throws an exception here
    } catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    
    return 0;
}
