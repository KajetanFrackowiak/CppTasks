#include <iostream>
#include <cmath>
#include <limits>

int main() {
    int firstVariable, secondVariable;

    std::cout << "Enter the first variable: ";
    std::cin >> firstVariable;

    std::cout << "Enter the second variable: ";
    std::cin >> secondVariable;

    int minValue = std::min(firstVariable, secondVariable);
    int maxValue = std::max(firstVariable, secondVariable);
    int sum = 0;

    // Point A. Calculate the sum of all integers in the range
    for (int i = minValue; i <= maxValue; i++) {
        if (i > 0 && sum > INT32_MAX - i) {
            std::cout << "Error: Integer overflow occurred.\n";
            return 1;
        } else if (i < 0 && sum < INT32_MAX - i) {
            std:: cout << "Error: Integer underflow occurred.\n";
            return 1;
        }
        sum += i;


    }

    std::cout << "Sum of integers in the range: " << sum << std::endl;
    return 0;
}
