#include <iostream>
#include <limits>

using namespace std;

int main() {
    int *tablica = new int[5]; // Dynamic allocation of an integer array with 5 elements

    // Initialize the array
    for (int i = 0; i < 5; i++) {
        int num;
        printf("Write your %d element to your array:\n", i);
        cin >> num;
        while (cin.fail() || cin.peek() != '\n') {
            cout << "Write corrent integer number:" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> num;
        }
        tablica[i] = num;
    }

    // Display the array before manipulation
    cout << "Array before manipulation:\n";
    for (int i = 0; i < 5; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    // Manipulate the array: Double values at odd indices, zero values at even indices
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            tablica[i] = 0; // Zero values at even indices
        } else {
            tablica[i] *= 2; // Double values at odd indices
        }
    }

    // Display the array after manipulation
    cout << "Array after manipulation:\n";
    for (int i = 0; i < 5; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    // Deallocate the dynamically allocated memory
    delete[] tablica;

    return 0;
}
