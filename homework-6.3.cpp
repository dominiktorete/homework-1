#include <iostream>
#include <windows.h>

void fibonacci(int value, long long x1 = 0, long long x2 = 1);
//recursive function
void fibonacci(int value, long long x1, long long x2) {
	if (value == 0)return;
	std::cout << x1 << " ";
	fibonacci(value - 1, x2, x2+x1);
}
int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int value{};
	cout << "Введите число: " << endl;
	cin >> value;
	cout << "Числа Фибоначчи: ";
	fibonacci(value);
	return EXIT_SUCCESS;
}
//not recursive function
/*void fibonacci(int value, long long x1, long long x2) {
	long long sum{};
	for (int i = 0; i < value; i++) {
		std::cout << x1 << " ";
		sum = x1 + x2;
		x1 = x2;
		x2 = sum;
	}
}
*/