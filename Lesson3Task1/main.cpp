#include <iostream>
#include <limits>

using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
}

int main() {
    int n;

    cout << "Write how many elements the array is to be: " << endl;
    cin >> n;

    while (cin.fail()) {
        cout << "Please enter a valid integer" << endl;
        cin.clear();  // clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // clear the input buffer
        cin >> n;
    }

    int arr[n];
    cout << "Write now " << n << " elements to array:\n";

    for (int i = 0; i < n; i++) {
        int num;
        cout << "Write " << i + 1 << " number: ";
        cin >> num;

        while (cin.fail() || num < 0) {
            cout << "Please enter a valid positive integer" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> num;
        }

        arr[i] = num;
    }

    int found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 5) {
            found = true;
            cout << "Element '5' is found in array:\n";
            for (int j = 0; j < n ; j++) {
                cout << arr[j] << " ";
            }
            cout << endl;
            break;
        }
    }

    if (!found) {
        cout << "Element '5' is not found in the array.\n";
    }

    cout << "It's the array:" << endl;
    printArray(arr, n);

    return 0;
}
