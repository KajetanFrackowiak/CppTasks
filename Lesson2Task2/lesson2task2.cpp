#include <iostream>

int main()
{
    int firstVariable, secondVariable;

    std::cout << "Enter the first variable: ";
    std::cin >> firstVariable;

    std::cout << "Enter the second variable: ";
    std::cin >> secondVariable;

    int count = 0;
    int greatestCommonMultiple = 0;

    for (int i = firstVariable; i <= secondVariable; i++)
    {

        // Point B. Check if the number is divisible by 7 or 13
        if (i % 7 == 0 || i % 13 == 0)
        {
            count++;
        }


        if (i % 7 == 0 && i % 13 == 0)
        {
            greatestCommonMultiple = i;
        }
    }

    std::cout << "Count of numbers divisible by 7 or 13: " << count << std::endl;
    std::cout << "Greatest common multiple of 7 and 13: " << greatestCommonMultiple << std::endl;

    return 0;
}