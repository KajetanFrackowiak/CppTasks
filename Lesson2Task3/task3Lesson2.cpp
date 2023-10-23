#include <iostream>
#include <string>

int main() {
    std::cout << "Write letter and I will write how many are behind it and in front of it in the alphabet:"
              << std::endl;

    char userInput;
    std::cin >> userInput;
    userInput = tolower(userInput); // Convert to lowercase

    while (!isalpha(userInput)) {
        std::cout << "It's not a letter" << std::endl;
        std::cout << "Write letter and I will write how many are behind it and in front of it in the alphabet:"
                  << std::endl;

        std::cin >> userInput;
        userInput = tolower(userInput);
    }

    if (isalpha(userInput)) {
        if (userInput >= 'a' && userInput <= 'z') {
            int letterBefore = userInput - 'a';
            int letterAfter = 'z' - userInput;

            std::cout << "There is " << letterBefore << " letters before in Alphabet, and " << letterAfter << " after.";
        }
    }

    return 0;
}