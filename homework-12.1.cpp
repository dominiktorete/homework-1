#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	std::ifstream file("in.txt");
	if (file.is_open()) {
		while (!file.eof()) {
			std::string str{};
			file >> str;
			std::cout << str << std::endl;
		}
		file.close();
	}
	else {
		std::cerr << "Error: file not open" << std::endl;
		return -1;
	}


	return 0;
}