#include <iostream>
#include <limits>
#include <vector>

using namespace std;

void swap(int arr[], int idx1, int idx2) {
    int temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}

void selectSort(int arr[], int n) {
    int minIndex;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr, i, minIndex);
        }
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
    cout << "Enter number of number to array:" << endl;
    cin >> numbersNumber;

    // cin.fail = sprawdza czy wystapił błąd podczas operacji wejsca cin.
    // cin.peek = sluzy do wyswietlania nastepnego znaku w strumieniu wejscia, ale nie usuwa go z bufora wejsciowe.
    // jest przydatne do sprawdzenia jaki znak jesy nastepny w buforze, jna przyklad, aby sprawdzic, czy to jest znak nowej linii
    while (cin.fail() || cin.peek() != '\n') {
        cout << "Please enter a valid integer number:" << endl;
        // resetuje flagę błędów
        cin.clear();
        // Służy do wyczysczenia bufora wejsciowego, ignorując znaki aż do napotaknia znaku nowej linii
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> numbersNumber;
    }

    // deklaracja i inicjalizacja obiektu vector
    vector<int> arr(numbersNumber);

    // inicjalizuje generator psedolosowego
    // static_cast<unsigned>(time(0)) kkonwertuje wynik czasu na typ unsigned co jest oczekiwanym typem argumentu dla ufnckji srand
    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < numbersNumber; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Array before sort:" << endl;
    printArr(arr.data(), numbersNumber);

    selectSort(arr.data(), numbersNumber);

    cout << "Sorted Array:" << endl;
    printArr(arr.data(), numbersNumber);

    return 0;
}