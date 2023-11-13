#include <iostream>
#include <limits>

using namespace std;

void printArray(int arr[], const int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    constexpr int size = 5;

    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Write element to your array:" << endl;
        cin >> arr[i];
        while (cin.fail() || cin.peek() != '\n') {
            cout << "Write correct integer to your array:" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> arr[i];
        }
    }

    cout << "Before changing:" << endl;
    printArray(arr, size);

    for (int i = 0; i < 5; i++) {
        if (i % 2 != 0) {
            arr[i] = arr[i] * 2;
        } else {
            arr[i] = 0;
        }
    }

    cout << "After changing:" << endl;
    printArray(arr, size);

    delete arr;
}
