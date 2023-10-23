#include <iostream>

using namespace std;

// Funkcja do sortowania przez proste wybieranie (malejąco)
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            swap(arr[i], arr[maxIndex]);
        }
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

    selectionSort(arr, ARR_SIZE);

    cout << "\nSorted array descending:" << endl;
    printArray(arr, ARR_SIZE);
    return 0;
}
