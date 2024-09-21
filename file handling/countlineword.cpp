#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream file("ex1.txt", ios::in);  // Open file in read mode
    
    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int wordCount = 0, lineCount = 0;
    string line;

    // Read the file line by line
    while (getline(file, line)) {
        lineCount++;  // Increment line count for each line
        
        // Use a string stream to split the line into words
        stringstream ss(line);
        string word;
        
        while (ss >> word) {
            wordCount++;  // Increment word count for each word
        }
    }

    file.close();

    // Output the word and line count
    cout << "Number of lines: " << lineCount << endl;
    cout << "Number of words: " << wordCount << endl;

    return 0;
}
