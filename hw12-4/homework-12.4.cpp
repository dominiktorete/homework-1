#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::ifstream file("in3.txt");
	if (file.is_open()) {
		int index1{}, index2{};
		file >> index1;
		file >> index2;
		int** arr2d = new (std::nothrow) int* [index1] {};
		if (!arr2d) {
			std::cerr << "Ошибка выделения памяти!" << std::endl;
			file.close();
			return 1;
		}
		for (int j = 0; j < index1; j++) {
			arr2d[j] = new (std::nothrow) int[index2] {};
			if (!arr2d[j]) {
				for (int i = 0; i < j; i++) {
					delete[] arr2d[i];
				}
				delete[] arr2d;
				file.close();
				return -1;
			}
		}	
		for (int j = 0; j < index1; j++) {
			for (int k = 0; k < index2; k++) {
				file >> arr2d[j][k];
			}
		}
		for (int j = 0; j < index1; j++) {
			for (int k = index2-1; k >= 0; k--) {
				std::cout << arr2d[j][k] << " ";
			}
			std::cout << "\n";
		}
		file.close();
		for (int j = 0; j < index1; j++) {
			delete[] arr2d[j];
		}
		delete[] arr2d;
	}
	else {
		std::cerr << "Error: file not open" << std::endl;
		return -1;
	}

	return 0;
}
