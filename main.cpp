#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int sum = 0;
	int odd_sum = 0;
	int even_sum = 0;

	int num;
	do {
		std::cout << "������� �����: ";
		std::cin >> num;
		sum += num;
		if (num % 2 == 0.0) {
			even_sum += num;
		} else {
			odd_sum += num;
		}
	} while (num != 0);
	std::cout << "����� ���� �����: " << sum
		<< "\n����� ������ �����: " << even_sum
		<< "\n����� �������� �����: " << odd_sum;

	return 0;
}