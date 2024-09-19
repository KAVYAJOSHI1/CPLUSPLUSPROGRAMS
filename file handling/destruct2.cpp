#include <iostream>
#include <stdexcept>

using namespace std;

class MyClass {
public:
    ~MyClass() noexcept { // Destructor is implicitly noexcept
        cout << "Destructor called." << endl;
        try {
            throw runtime_error("Error in destructor.");
        } catch (const exception& e) {
            // Handle the exception inside the destructor to prevent termination
            cout << "Caught exception in destructor: " << e.what() << endl;
        }
    }
};

int main() {
    try {
        MyClass obj;
    } catch (const exception& e) {
        // Won't be reached as the exception is caught in the destructor
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
