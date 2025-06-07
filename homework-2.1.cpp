#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	using std::endl;
	setlocale(LC_ALL, "ru");
	int k{};
	cout << "Введите число:" << endl;
	cin >> k;
	cout << "Вы ввели:\n" << k << endl;
}