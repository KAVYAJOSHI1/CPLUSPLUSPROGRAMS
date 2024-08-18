#include<iostream>
using namespace std;

// Corrected swap function
void swap(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}

// Function to heapify a subtree rooted with node i
void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // left child
    int right = 2 * i + 2; // right child

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than the largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
}

// Function to perform heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // Call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main()
{
    int n;
    cout << "ENTER THE SIZE: ";
    cin >> n;

    // Dynamic array allocation after getting size
    int* arr = new int[n];

    cout << "ENTER THE ELEMENTS: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Perform heap sort
    heapSort(arr, n);

    // Print sorted array
    cout << "SORTED ARRAY: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}
