#include <iostream>
using namespace std;

class Heap {
public:
    int arr[100]; // Array to store the heap elements
    int size = 0; // Current size of the heap

    // Function to insert a value into the heap
    void insert(int val) {
        size = size + 1; // Increment the size of the heap
        int index = size; // Set the index to the new position
        arr[index] = val; // Insert the value at the new position

        // Heapify up: Maintain the heap property
        while (index > 1) { // Continue until the root is reached
            int parent = index / 2; // Find the parent index
            if (arr[index] < arr[parent]) { // If child is smaller than parent
                // Swap the child and parent
                int temp = arr[index];
                arr[index] = arr[parent];
                arr[parent] = temp;

                index = parent; // Move up to the parent
            } else {
                return; // Stop if the heap property is satisfied
            }
        }
    }

    // Function to print the heap
    void printHeap() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Heap h;

    // Insert values into the heap
    h.insert(55);
    h.insert(50);
    h.insert(52);
    h.insert(57);

    // Print the heap
    cout << "Heap after insertion: ";
    h.printHeap();

    return 0;
}
