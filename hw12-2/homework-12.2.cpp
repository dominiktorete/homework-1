#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::ifstream file("in1.txt");
	if (file.is_open()) {
		int index{}, i{};
   		file >> index;
		int* arr = new (std::nothrow)int[index];
		if (!arr) {
			std::cerr << "Error: don`t creaty massive" << std::endl;
			file.close();
			return -1;
		}

		while (file >> arr[i] && i < index) {
			i++;
		}
		file.close();
		for (int i = index - 1; i >= 0; i--) {
			std::cout << arr[i] << " ";
		}
		delete[] arr;
	}
	else {
		std::cerr << "Error: file not open" << std::endl;
		
		return -1;
	}
	return 0;
}
