#include <iostream>
#include <ctime>
#include <limits>
using namespace std;

int main() {
    int size;
    cout << "Hello, enter a number of array elements!" << endl;
    cin >> size;

    while (cin.fail() || cin.peek() != '\n') {
        cout << "Write a valid integer number:" << endl;
        // resetuje flage bledow
        cin.clear();
        // sluzy do wyczyszczenia bufora wejsciowego, ignorujaz znaki az do napotkania znaku nowej linii
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> size;
    }

    int arr[size];

    srand(time(0));

    for (int i = 0; i < size - 1; i++) {
        arr[i] = rand() % 100;
    }

    int zero = 0;
    int* min;
    min = &zero;
    int* max;
    max = &zero;
    int* sum;
    sum = &zero;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] < *min) {
            min = &arr[i];
        }
        if (arr[i] > *max) {
            max = &arr[i];
        }
        sum += arr[i];

    }

    cout << "The biggest element in array is equal: " << *max << endl;
    cout << "The smallest element in array is equal: " << *min << endl;
    cout << "The sum elements of the array is equal: " << *sum << endl;

    delete max;
    delete min;
    delete sum;
    return 0;
}
