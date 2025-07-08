#include <iostream>
#include <string>
#include <windows.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string user_str{}, mystery_str = "Малина";
	do {
		std::cout << "Угадайте слово: ";
		getline(std::cin, user_str);
		if (user_str == mystery_str) {
			std::cout << "Правильно! Вы победили! Загаданное слово — " << mystery_str << std::endl;
			break;
		}
		std::cout << "Неправильно" << std::endl;
		
	} while (user_str != mystery_str);
	

	return 0;
}