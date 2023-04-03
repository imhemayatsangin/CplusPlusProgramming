#include <iostream>
#include <chrono> // for measuring execution time
using namespace std;

// Function for performing linear search on the array
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // key found at index i
        }
    }
    return -1; // key not found in the array
}

// Function for performing binary search on the array
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid; // key found at index mid
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1; // key not found in the array
}

int main() {
    int arr[] = {3, 6, 23, 35, 42, 88, 155, 434, 570, 678, 732, 755, 812, 834, 900, 945};
    int n = sizeof(arr) / sizeof(arr[0]); // size of the array
    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    // Performing linear search and measuring its execution time
    auto start = chrono::high_resolution_clock::now();
    int linearIndex = linearSearch(arr, n, key);
    auto end = chrono::high_resolution_clock::now();
    double linearTime = chrono::duration_cast<chrono::microseconds>(end - start).count();

    // Performing binary search and measuring its execution time
    start = chrono::high_resolution_clock::now();
    int binaryIndex = binarySearch(arr, n, key);
    end = chrono::high_resolution_clock::now();
    double binaryTime = chrono::duration_cast<chrono::microseconds>(end - start).count();

    // Printing the results
    if (linearIndex == -1) {
        cout << "Key not found in the array.\n";
    }
    else {
        cout << "Linear search: Key found at index " << linearIndex << ", Execution time: " << linearTime << " microseconds\n";
    }
    if (binaryIndex == -1) {
        cout << "Key not found in the array.\n";
    }
    else {
        cout << "Binary search: Key found at index " << binaryIndex << ", Execution time: " << binaryTime << " microseconds\n";
    }

    // Comparing the performances of the two algorithms
    if (linearTime < binaryTime) {
        cout << "Linear search is faster than binary search.\n";
    }
    else if (linearTime > binaryTime) {
        cout << "Binary search is faster than linear search.\n";
    }
    else {
        cout << "Both linear and binary searches have the same execution time.\n";
    }

    return 0;
}
