#include <iostream>
#include <cstring>

using namespace std;

void reverseString(char *str) {
    char *end = str + strlen(str) - 1;
    while (str < end) {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    reverseString(str);

    cout << "Reversed string: " << str << endl;

    return 0;
}