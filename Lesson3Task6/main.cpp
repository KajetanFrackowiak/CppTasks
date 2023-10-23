#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <limits>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int main() {
    int elementsNum;
    while (true) {
        cout << "Enter the number of elements in the array: ";
        cin >> elementsNum;

        if (cin.fail() || elementsNum < 0) {
            cout << "Please enter a valid positive number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    vector<int> arr(elementsNum);

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < elementsNum; i++) {
        arr[i] = rand() % 100;
    }

    vector<int> unsortedArr = arr;
    vector<int> sortedArr = arr;

    bubbleSort(sortedArr);

    cout << "Unsorted array:\n";
    for (int i = 0; i < elementsNum; i++) {
        cout << unsortedArr[i] << " ";
    }
    cout << endl;

    cout << "Sorted array by bubbleSort:\n";
    for (int i = 0; i < elementsNum; i++) {
        cout << sortedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
