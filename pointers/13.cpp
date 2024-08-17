#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "ENTER THE STRING: ";
    getline(cin, str); // Use getline to allow spaces in the input

    const char* ch = str.c_str(); // Get a pointer to the C-string representation
    int vowelCount = 0; // Counter for vowels
    int consonantCount = 0; // Counter for consonants

    while (*ch != '\0') { // Traverse until the end of the string
        char currentChar = *ch; // Dereference pointer to get the character
        
        // Check if the current character is a vowel
        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || 
            currentChar == 'o' || currentChar == 'u' || 
            currentChar == 'A' || currentChar == 'E' || 
            currentChar == 'I' || currentChar == 'O' || 
            currentChar == 'U') {
            vowelCount++;
        }
        // Check if the current character is a consonant
        else if ((currentChar >= 'a' && currentChar <= 'z') || 
                 (currentChar >= 'A' && currentChar <= 'Z')) {
            consonantCount++;
        }
        ch++; // Move the pointer to the next character
    }

    cout << "NUMBER OF VOWELS: " << vowelCount << endl;
    cout << "NUMBER OF CONSONANTS: " << consonantCount << endl;

    return 0;
}
