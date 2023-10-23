#include <iostream>
#include <limits>
#include <cstdlib>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    int arr[100];
    int search;

    std::stringstream unsortedArr;
    std::stringstream sortedArr;

    cout << "Write number to search in my array: " << endl;
    cin >> search;

    while (cin.fail()) {
        cout << "Please enter a valid integer: " << endl;
        cin.clear();  // clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // clear the input buffer
        cin >> search;
    }

    srand(time(0)); // current time as the seed

    for (int i = 0; i < 100; i++) { // Generate and sort 100 elements
        arr[i] = rand() % 100;
        unsortedArr << arr[i];
        unsortedArr << " ";
    }

    std::sort(arr, arr + 100); // Sort the entire array

    bool isSearch = false;

    for (int i = 0; i < 100; i++) {
        if (arr[i] == search) {
            isSearch = true;
        }
        sortedArr << arr[i];
        sortedArr << " ";
    }

    if (isSearch) {
        cout << search << " was found in the sorted array." << endl;
    } else {
        cout << search << " was not found in the sorted array." << endl;
    }

    cout << "Unsorted array: " << unsortedArr.str() << endl;
    cout << "Sorted array: " << sortedArr.str() << endl;

    return 0;
}
