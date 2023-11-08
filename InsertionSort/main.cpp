#include <iostream>
#include <limits>
#include <ctime>
#include <cstdlib>

using namespace std;

void insertionSort(int arr[], int n) {
    int current;
    int otherIndex;
    for (int i = 1; i < n; i++) {
        current = arr[i];
        otherIndex = i;
        while (otherIndex > 0 && current < arr[otherIndex - 1]) {
            arr[otherIndex] = arr[otherIndex - 1];
            otherIndex--;
        }
        arr[otherIndex] = current;
    }
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numbersNumber;
    cin >> numbersNumber;
	
	// Sprawdza, czy wystąpił błąd wejscia/wyjscia lub nastepny znak wejscia nie jest znakiem nowej linii
    while (cin.fail() || cin.peek() != '\n') {
        cout << "Write a valid integer number:" << endl;
        // Resetuje flagę błędów
        cin.clear();
        // Służy do wyczysczenia bufora wejsciowego, ignorując znaki aż do napotkania znaku nowej linii
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> numbersNumber;
    }

    int arr[numbersNumber];

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < numbersNumber; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Original Array:" << endl;
    printArr(arr, numbersNumber);

    insertionSort(arr, numbersNumber);

    cout << "Sorted Array:" << endl;
    printArr(arr, numbersNumber);

}
