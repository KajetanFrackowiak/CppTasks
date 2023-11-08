#include <iostream>
#include <limits>

using namespace std;

int main() {
    const int initialSize = 10;
    int *arr1 = new int[initialSize];
    int *arr2 = new int[initialSize];

    // Wczytaj dane do pierwszej tablicy
    cout << "Podaj 10 liczb dla pierwszej tablicy:" << endl;
    for (int i = 0; i < initialSize; i++) {
        int num;
        cin >> num;
        while (cin.fail() || cin.peek() != '\n') {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Podaj poprawną liczbę:" << endl;
            cin >> num;
        }
        arr1[i] = num;
    }

    // Wczytaj dane do drugiej tablicy
    cout << "Podaj 10 liczb dla drugiej tablicy:" << endl;
    for (int i = 0; i < initialSize; i++) {
        int num;
        cin >> num;
        while (cin.fail() || cin.peek() != '\n') {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Podaj poprawną liczbę:" << endl;
            cin >> num;
        }
        arr2[i] = num;
    }

    // Połącz dwie tablice w jedną
    int totalSize = initialSize * 2;
    int *combinedArr = new int[totalSize];

    for (int i = 0; i < totalSize; i++) {
        if (i < initialSize) {
            combinedArr[i] = arr1[i];
        } else {
            combinedArr[i] = arr2[i - initialSize];
        }
    }

    // Wczytaj i dodaj 2 dodatkowe elementy na koniec połączonej tablicy
    cout << "Podaj 2 dodatkowe liczby do dodania na koniec tablicy:" << endl;
    for (int i = 0; i < 2; i++) {
        int num;
        cin >> num;
        while (cin.fail() || cin.peek() != '\n') {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Podaj poprawną liczbę:" << endl;
            cin >> num;
        }
        combinedArr[totalSize + i] = num;
    }

    // Wydrukuj połączoną tablicę z uwzględnieniem numerów indeksów elementów
    cout << "Połączona tablica:" << endl;
    for (int i = 0; i < totalSize + 2; i++) {
        cout << "arr[" << i << "] = " << combinedArr[i] << endl;
    }

    // Zwolnij pamięć
    delete[] arr1;
    delete[] arr2;
    delete[] combinedArr;

    return 0;
}
