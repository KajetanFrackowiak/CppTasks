#include <iostream>

using namespace std;

// Funkcja do sortowania przez proste wstawianie (rosnąco)
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    insertionSort(arr, ARR_SIZE);

    cout << "\nSorted array ascending" << endl;
    printArray(arr, ARR_SIZE);

    return 0;
}
