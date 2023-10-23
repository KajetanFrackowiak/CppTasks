#include <iostream>
#include <limits>

using namespace std;

void adding(double var1, double var2) {
    cout << "Adding: " << var1 << " and " << var2 << endl;
    cout << var1 + var2 << endl;
}

void subtraction(double var1, double var2) {
    cout << "Subtraction: " << var1 << " and " << var2 << endl;
    cout << var1 - var2 << endl;
}

int main() {
    double var1;
    double var2;

    cout << "Write first number:\n";
    cin >> var1;

    while (cin.fail()) {
        cout << "Please enter a valid double" << endl;
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
        cin >> var1;
    }

    cout << "Write second number:\n";
    cin >> var2;

    while (cin.fail()) {
        cout << "Please enter a valid double" << endl;
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
        cin >> var1;
    }

    adding(var1, var2);
    subtraction(var1, var2);

    return 0;
}
