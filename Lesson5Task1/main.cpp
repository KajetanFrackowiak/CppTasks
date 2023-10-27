#include <iostream>
#include <limits>

using namespace std;

long factorial(long n) {
    if (n <= 1) {
        return 1;
    } else {
        return long(n) * factorial(n - 1);
    }
}

long power(long base, long exponent) {
    if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else if (exponent < 0) {
        return 1.0 / base * power(base, -exponent);
    } else {
        return 1.0;
    }
}

int main() {
    long num;
    long exp;
    cout << "Enter a number:\n";
    cin >> num;

    while (cin.fail() || num <= 0) {
        cout << "Enter a valid positive natural number bigger than 0:\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> num;
    }

    cout << "Enter the exponent:\n";
    cin >> exp;
    while (cin.fail() || exp < 0) {
        cout << "Enter a valid non-negative number:\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> exp;
    }

    // Calculating and displaying factorial
    unsigned long long result = factorial(num);
    cout << num << "! = " << result << endl;

    // Calculating and displaying a power
    long result_power = power(num, exp);
    cout << num << " to the power of " << exp << " is equal to " << result_power << endl;

    return 0;
}
