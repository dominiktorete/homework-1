#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n{};
	std::cout << "Введите размер массива: ";
	std::cin >> n;
	int* arr = new int[n] {};

	for (int i = 0; i < n; i++) {
		std::cout << "arr[" << i << "] = ";
		std::cin >> arr[i];
	}
	std::ofstream file("in2.txt");
	if (file.is_open()) {
		file << n << std::endl;
		while (n > 0) {
			file << arr[n-1] << " ";
			n--;
		}
		file.close();
	}
	else {
		std::cerr << "Error: file not open" << std::endl;
		return -1;
	}
	delete[] arr;

	return 0;
}