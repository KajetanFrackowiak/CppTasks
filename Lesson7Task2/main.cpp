// C++ Program to print the fibonacci series
// using iteration (loops)
#include <iostream>
#include <limits>
using namespace std;
 
// Function to print fibonacci series
int printFib(int arr[], const int n)
{
    // When number of terms is greater than 0
    int prev1 = 1;
    int prev2 = 0;
 
    // For loop to print fibonacci series
    for (int i = 1; i <= n; i++) {
        if (i > 2) {
            const int num = prev1 + prev2;
            prev2 = prev1;
            prev1 = num;
            arr[i] = num;
        }
 
        // For first two terms
        if (i == 1) {
            arr[i] = prev2;
        }
        if (i == 2) {
            arr[i] = prev1;
        }
    }
}

int main()
{
    int n;
    cout << "Write how many Fibbonacie's numbers you want:" << endl;
    cin >> n;

    while (cin.fail() || cin.peek() != '\n' || n < 1) {
        cout << "Write corrent integer number and bigger not smaller than one:" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> n;
    }

    int* arr = new int[n]();

    arr[n] = printFib(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[n] << " ";
    }

    delete arr;
    return 0;
}