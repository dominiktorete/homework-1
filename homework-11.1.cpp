#include <iostream>
#include <string>
#include <windows.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string first_name{}, last_name{}, hello{};
	std::cout << "Введите имя: ";
	getline(std::cin, last_name);
	std::cout << "Введите фамилию: ";
	getline(std::cin, first_name);
	hello = "Здравствуйте, " + last_name + " " + first_name;
	std::cout << hello << std::endl;



	return 0;
}