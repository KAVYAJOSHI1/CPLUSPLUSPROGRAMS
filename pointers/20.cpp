#include <iostream>
using namespace std;

// Define a structure to hold person details
struct Person {
    string name;
    int age;
};

// Function to display person details
void displayPerson(Person* p) {
    cout << "Name: " << p->name << endl;
    cout << "Age: " << p->age << endl;
}

int main() {
    // Create an array of pointers to Person structures
    Person* people[3];

    // Allocate memory for each Person and initialize
    for (int i = 0; i < 3; ++i) {
        people[i] = new Person;
    }

    // Set values for each Person
    people[0]->name = "Alice";
    people[0]->age = 30;

    people[1]->name = "Bob";
    people[1]->age = 25;

    people[2]->name = "Charlie";
    people[2]->age = 35;

    // Pointer to the array of Person pointers
    Person** pPeople = people;

    // Display details using the pointer to the array
    for (int i = 0; i < 3; ++i) {
        cout << "Person " << (i + 1) << ":" << endl;
        displayPerson(pPeople[i]);
        cout << endl;
    }

    // Deallocate memory for each Person
    for (int i = 0; i < 3; ++i) {
        delete people[i];
    }

    return 0;
}
