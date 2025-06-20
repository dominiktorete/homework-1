#include <iostream>
#include <windows.h>

void pow(int value, int power) {
	int result{ 1 };
	for (int i = 0; i < power; i++) {
		result *= value;
	}
	std::cout << value << " в степени " << power << " = " << result << std::endl;
}
int main() {
		using std::cin;
		using std::cout;
		using std::endl;
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		char ch{};
		do{
			int val{}, power{};
			cout << "Введите значение: " << std::endl;
			cin >> val;
			cout << "Введите степень: " << std::endl;
			cin >> power;
			pow(val, power);
			cout << "Введите \"+\" если хотите продолжить вводить данные или \"-\" в противном случае" << endl;
			cin >> ch;
			
		} while (ch == '+');

		return EXIT_SUCCESS;
}