#include <iostream>

int main() {
	int a;

	while (!(std::cin >> a)) {
		std::cin.clear();
		std::cin.sync();
	}

	return 0;
}