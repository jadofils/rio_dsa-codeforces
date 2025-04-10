#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int passCount = 0; // Counter for the number of passes
    for (int i = 0; i < n - 1; i++) {
        cout << "Pass " << (i + 1) << ": "; // Display the pass number
        bool swapped = false; // To check if swapping occurred in this pass
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements and swap if necessary
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        
        // Display the array after each pass
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;

        // Increment the pass count
        passCount++;

        // If no swapping occurred, the array is sorted
        if (!swapped) {
            break;
        }
    }
    cout << "Total Passes: " << passCount << endl; // Display the total number of passes
}

int main() {
    int arr[] = {5, 3, 8, 4, 2}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Find size of the array

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array using Bubble Sort
    bubbleSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
