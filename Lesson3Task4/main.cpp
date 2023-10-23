#include <iostream>

using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop, then break
        if (swapped == false)
            break;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << " " << arr[i];
}

int main() {
    const int ARR_SIZE = 20;
    int arr[ARR_SIZE];

    srand(time(0));

    for (int & i : arr) {
        i = rand() % 100;
    }

    cout << "Unsorted array:" << endl;
    printArray(arr, ARR_SIZE);

    bubbleSort(arr, ARR_SIZE);

    cout << "\nSorted array ascending" << endl;
    printArray(arr, ARR_SIZE);

    return 0;
}
