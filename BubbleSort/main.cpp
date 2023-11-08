#include <iostream>
#include <cstdlib> // Include the <cstdlib> header for the rand function
#include <ctime>

using namespace std;

void swap(int arr[], int idx1, int idx2) {
    int temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}

void bubbleSort(int arrayToSort[], int n) {
    int it = 0;
    bool swapped = true;
    while (it < n - 1 && swapped) {
        swapped = false;
        for (int i = 0; i < n - 1 - it; i++) {
            if (arrayToSort[i] > arrayToSort[i + 1]) {
                swap(arrayToSort, i, i + 1);
                swapped = true;
            }
        }
        it++;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
	int numbersNumber;
    cin >> numbersNumber;

    while (cin.fail() || cin.peek() != '\n') {
        cout << "Write a valid integer number:" << endl;
        // Resetuje flagę błędów
        cin.clear();
        // Służy do wyczysczenia bufora wejsciowego, ignorując znaki aż do napotkania znaku nowej linii
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> numbersNumber;
    }


    srand(time(0)); // Use the current time as a seed
    int testArray[numbersNumber];

    for (int i = 0; i < sizeof(testArray) / sizeof(testArray[0]); i++) {
        testArray[i] = rand() % 100; // Generate random numbers between 0 and 99
    }

    cout << "Original Array:" << endl;
    printArray(testArray, sizeof(testArray) / sizeof(testArray[0]));

    sort(testArray, sizeof(testArray) / sizeof(testArray[0]));

    cout << "Sorted Array:" << endl;
    printArray(testArray, sizeof(testArray) / sizeof(testArray[0]));

    return 0;
}
