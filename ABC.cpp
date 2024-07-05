#include<iostream>
using namespace std;

class XYZ; // Forward declaration of class XYZ

class ABC {
    private:
        int numA;
    public:
        void setNumA() {
            numA = 5;
        }
        friend int add(ABC, XYZ); // Declare add as a friend function
};

class XYZ {
    private:
        int numB;
    public:
        void setNumB() {
            numB = 10;
        }
        friend int add(ABC, XYZ); // Declare add as a friend function
};

int add(ABC O1, XYZ O2) {
    return O1.numA + O2.numB;
}

int main() {
    ABC O1;
    XYZ O2;
    
    O1.setNumA();
    O2.setNumB();
    
    cout << "The sum is: " << add(O1, O2) << endl;
    
    return 0;
}
