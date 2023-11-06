#include <iostream>

using namespace std;

int main() {
    int* ptr1;
    int first;
    cout << "Write first variable:" << endl;
    cin >> first;
    ptr1 = &first;

    int* ptr2;
    int sec;
    cout << "Write second variable:" << endl;
    cin >> sec;
    ptr2 = &sec;

    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "First element now: " << *ptr1 << endl;
    cout << "Second element now: " << *ptr2 << endl;


    return 0;
}
