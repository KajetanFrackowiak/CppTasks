#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

void toThePower(int num, int power) {
    double toPower = pow(num, power);
    cout << num << " to the power of " << power << " is equal " << toPower << endl;
}

int main() {
    int num;
    int power;
    cout << ("Enter a number:\n");
    cin >> num;

    while (cin.fail() || num <= 0) {
        cout << ("Enter a valid natural number:\n");
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> num;
    }

    cout << ("Write power factor:\n");
    while (cin.fail() || power <= 0) {
        cout << ("Enter a valid postiive natural number:\n");
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> power;
    }

    toThePower(num, power);

    return 0;
}
