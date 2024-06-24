#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int j = ++i + i-- - --i + i++;
    cout << "i: " << i << ", j: " << j << endl;
    return 0;
}
