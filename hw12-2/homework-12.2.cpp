#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::ifstream file("in1.txt");
	if (file.is_open()) {
		int index{}, i{1};
		file >> index;
		
		while (i <= index) {
			file.seekg(-i*2,std::ios::end);
			int value{};
			
			file >> value;
			i++;
			std::cout << value << " " ;
		}
		file.close();
	}
	else {
		std::cerr << "Error: file not open" << std::endl;
		return -1;
	}


	return 0;
}
