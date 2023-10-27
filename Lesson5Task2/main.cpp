#include <iostream>

using namespace std;

int main() {
    string first = "piatek";
    string second = "piateczek";
    string concat;

    bool same;
    if (first == second) {
        same = true;
        cout << first << " and " << second << " are the same" << endl;
        cout << "First lengths is equal = " << first.length() << endl;
        cout << "Second lengths is equal = " << second.length() << endl;
    } else {
        same = false;
        cout << first << " and " << second << " aren't the same" << endl;
        cout << "First lengths is equal = " << first.length() << endl;
        cout << "Second lengths is equal = " << second.length() << endl;
    }

    second.append(" ");
    cout << "\nLength after append space to second arg: " <<  second.length() << endl;

    concat = first + second;
    cout << "There is result after concat and added space to the second arg: " << concat.length() << endl;

    bool checkLength;
    if (first.length() == second.length()) {
        checkLength = true;
        cout << "They have the same length" << endl;
        cout << "First lengths is equal = " << first.length() << endl;
        cout << "Second lengths is equal = " << second.length() << endl;
    } else {
        checkLength = false;
        cout << "\nThey don't have the same length" << endl;
        cout << "First lengths is equal = " << first.length() << endl;
        cout << "Second lengths is equal = " << second.length() << endl;
    }

    return 0;
}
