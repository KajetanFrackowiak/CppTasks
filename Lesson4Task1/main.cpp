#include <iostream>
#include <limits>

using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
}

int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int end) {
    // base case
    if (start >= end)
        return;

    // partitioning the array
    int p = partition(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, end);
}

int main() {
    int arr[9];
    for (int i = 0; i < 10; i++) {
        cout << "Add " << i << " number to array:\n";
        cin >> arr[i];

        while (cin.fail()) {
            cout << "Please enter a valid integer" << endl;
            cin.clear(); // clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear the input buffer
            cin >> arr[i];
        }
    }

    cout << "Not sorted:" << endl;
    printArray(arr, 10);

    quickSort(arr, 0, 10);
    cout << "\nSorted:" << endl;
    printArray(arr, 10);

    return 0;
}