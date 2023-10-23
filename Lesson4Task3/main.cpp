#include <iostream>
#include <limits>
#include <cctype>

using namespace std;

char getValidCharInput() {
    char input;
    cout << "Enter a character:\n";
    cin >> input;
    while (cin.get() != '\n') {
        cout << "Please enter a valid character:\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> input;
    }
    return input;
}

int sum(char arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        if (isdigit(arr[i])) {total += arr[i] = '0';}  // Convert character digit to integer and add to total
    }
    return total;
}

void sum(int numbers) {
    if (numbers == 0) {
        cout << "Lack of numbers.";
    } else {
        cout << "It's sum of your numbers:\n" << numbers << endl;
    }
}


int main() {
    char var1;
    char var2;
    char var3;
    var1 = getValidCharInput();
    var2 = getValidCharInput();
    var3 = getValidCharInput();

    char arr[3] = {var1, var2, var3};
    char* ptr = arr;

    int charSum = sum(ptr, 3);
    sum(charSum);

    return 0;
}
