#include <iostream>
#include <ctime>
#include <limits>
using namespace std;

int main() {
    int size;
    cout << "Hello, enter a number of array elements:" << endl;
    cin >> size;

    while (cin.fail() || cin.peek() != '\n') {
        cout << "Write a valid integer number:" << endl;
        // resetuje flage bledow
        cin.clear();
        // sluzy do wyczyszczenia bufora wejsciowego, ignorujaz znaki az do napotkania znaku nowej linii
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> size;
    }

    int* arr = new int[size];

    srand(time(0));

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }

    int min = arr[0];
    int max = arr[0];
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];

    }

    cout << "The biggest element in array is equal: " << max << endl;
    cout << "The smallest element in array is equal: " << min << endl;
    cout << "The sum elements of the array is equal: " << sum << endl;

    delete[] arr; // Deallocate the dynamically allocated array
    return 0;
}
