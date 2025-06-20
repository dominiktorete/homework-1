#include <iostream>
#include <windows.h>

int sum(int a, int b) {
	return a + b;
}
int diff(int a, int b) {
	return a - b;
}
int multiplication(int a, int b) {
	return a * b;
}
double division(double a, double b) {
	if (b == 0) {
		std::cout << "Error: division by zero" << std::endl;
		return -1;
	}
	return a / b;
}
int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 5, b = 10;
	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);
	cout << a << " + " << b << " = " << s << endl;
	cout << a << " - " << b << " = " << dif << endl;
	cout << a << " * " << b << " = " << mult << endl;
	cout << a << " / " << b << " = " << div << endl;
	return EXIT_SUCCESS;
}