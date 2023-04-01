#include <iostream>

using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void sortHalfArray(int arr[], int n) {
    int mid = n / 2;

    // sort first half in ascending order
    selectionSort(arr, mid);

    // sort second half in descending order
    for (int i = mid; i < n-1; i++) {
        int maxIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        int temp = arr[maxIndex];
        arr[maxIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {3, 6, 23, 15, 12, 8, 55, 43, 57, 90, 13, 4, 25, 72, 1, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortHalfArray(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
