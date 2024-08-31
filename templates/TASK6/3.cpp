#include <iostream>
using namespace std;

template <typename T>
class Queue {
private:
    T* arr; // Array to hold queue elements
    int front; // Index of the front element in the queue
    int rear; // Index of the rear element in the queue
    int size; // Current size of the queue
    int capacity; // Maximum size of the queue

public:
    // Constructor to initialize queue with given capacity
    Queue(int cap) : capacity(cap), front(0), rear(-1), size(0) {
        arr = new T[capacity];
    }

    // Insert an element into the queue
    void insert(T value) {
        if (size == capacity) {
            cout << "Queue Overflow" << endl;
            return;
        }
        rear = (rear + 1) % capacity; // Circular increment
        arr[rear] = value;
        size++;
    }

    // Delete an element from the queue
    void deleteElement() {
        if (size == 0) {
            cout << "Queue Underflow" << endl;
            return;
        }
        cout << "ELEMENT DELETED IS: " << arr[front] << endl;
        front = (front + 1) % capacity; // Circular increment
        size--;
    }

    // Display all elements in the queue
    void display() {
        if (size == 0) {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "THE QUEUE IS:" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % capacity] << endl;
        }
    }

    // Destructor to release allocated memory
    ~Queue() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "ENTER THE CAPACITY OF THE QUEUE: ";
    cin >> n;

    Queue<int> queue(n); // Create a queue with capacity n for int

    while (true) {
        int choice;
        cout << "ENTER 1 TO INSERT:" << endl;
        cout << "ENTER 2 TO DELETE:" << endl;
        cout << "ENTER 3 TO DISPLAY:" << endl;
        cout << "ENTER 4 TO EXIT:" << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                int x;
                cout << "ENTER THE ELEMENT TO INSERT: ";
                cin >> x;
                queue.insert(x);
                break;
            }
            case 2: {
                queue.deleteElement();
                break;
            }
            case 3: {
                queue.display();
                break;
            }
            case 4: {
                cout << "Exiting..." << endl;
                return 0;
            }
            default: {
                cout << "INVALID INPUT" << endl;
                break;
            }
        }
    }

    return 0;
}
