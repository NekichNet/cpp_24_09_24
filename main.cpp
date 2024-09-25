#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double sum = 0;
	double num;
	do {
		std::cout << "¬ведите число: ";
		std::cin >> num;
		sum += num;
	} while (num != 0.0);
	std::cout << "—умма всех чисел: " << sum;

	return 0;
}