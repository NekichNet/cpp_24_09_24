#include <iostream>
#include <Windows.h>
#include <algorithm>
#include <string>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double usd_price = 92.86, eur_price = 103.41, cny_price = 13.22, far_price = 37.00,
		jpy_price = 0.41, fee = 0.05, lost, user_trade, rub, result;
	std::string fiat;
	char choice;

	std::cout << "Текущий курс валют:\n"
		<< "USD - " << usd_price << "руб.\n"
		<< "EUR - " << eur_price << "руб.\n"
		<< "CNY - " << cny_price << "руб.\n"
		<< "FAR - " << far_price << "руб.\n"
		<< "JPY - " << jpy_price << "руб.";

	do
	{
		std::cout << "\n\nВведите кол-во рублей для конвертации: ";
		std::cin >> user_trade;
		lost = user_trade * fee;
		rub = user_trade - lost;
		std::cout << "Банк взымает комиссию в размере" << fee * 100 << "% от суммы конвертирования.\n"
			<< "Итоговая комиссия: " << lost << "\n\nВведите код валюты, в которую собираетесь конвертировать: ";

		while (true) {
			std::cin >> fiat;
			std::transform(fiat.begin(), fiat.end(), fiat.begin(),
				[](unsigned char c) { return std::tolower(c); });
			if (fiat == "usd") {
				result = rub / usd_price;
				break;
			}
			else if (fiat == "eur") {
				result = rub / eur_price;
				break;
			}
			else if (fiat == "cny") {
				result = rub / cny_price;
				break;
			}
			else if (fiat == "far") {
				result = rub / far_price;
				break;
			}
			else if (fiat == "jpy") {
				result = rub / jpy_price;
				break;
			}
			else {
				std::cout << "Не верный код валюты. Повторите попытку: ";
			}
		}
		std::cout << "Результат конвертации: " << result << " " << fiat
			<< "\nЖелаете снова воспользоваться услугами конвертера? (y/n) ";
		std::cin >> choice;
	} while (choice == 'y' || choice == 'Y');

	return 0;
}