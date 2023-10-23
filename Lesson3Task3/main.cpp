#include <iostream>

using namespace std;

void bubbleSortDesc(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop, then break
        if (!swapped)
            break;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
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

    bubbleSortDesc(arr, ARR_SIZE);

    cout << "\nSorted array descending:" << endl;
    printArray(arr, ARR_SIZE);
    return 0;
}
