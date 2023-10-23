//ctrl k c
#include <iostream>

int main() {
	int first;
	std::cout << "Write first number:\n";
	std::cin >> first;
	while (first > INT_MAX) {
		std::cout << "This number is too big.\nPlease write smaller number:\n";
		std::cout << "Write first number:\n";
		std::cin >> first;
	}

	int second;
	std::cout << "Write second number:\n";
	std::cin >> second;
	int between;

	if (first > second) {
		int sum = 0;

		between = first - second;
		while (between >= 0) {
			sum += second;
			second++;
			between--;
		}
		std::cout << "Number's sum between first and second is :" << sum;
	}
	else if (first < second) {
		int sum = 0;

		between = second - first;
		while (between >= 0) {
			sum += first;
			first++;
			between--;
		}
		std::cout << "Number's sum between first and second is :" << sum;
	}
	else {
		std::cout << "Numbers are the same.";
	}

	return 0;
}



// napisac program ktory wczyta dwa inty a nastepnie zliczy sume wszystkich liczb z zakresu od pierwszej do drugiej