//to take 5 array elements and display them using pointers
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = a;
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    return 0;
}