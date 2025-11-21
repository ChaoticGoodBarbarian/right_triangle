#include <iostream>

int main() {
	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;

	if ((num3 * num3 == (num1 * num1) + (num2 * num2)) ||
		(num2 * num2 == (num1 * num1) + (num3 * num3)) ||
		(num1 * num1 == (num2 * num2) + (num3 * num3))) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
	return 0;
}
