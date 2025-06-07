#include <iostream>
#include <string>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	using std::cout;
	using std::cin;
	using std::endl;
	std::string str{};
	cout << "Введите число:" << endl;
    getline(cin >> std::ws, str);
	cout << "Вы ввели:\n" << str << endl;
}