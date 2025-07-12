#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <windows.h>

void printh(char** arr, int rows, int columns, int generation);
char** creaty_array(int rows, int columns);
char** readfile(int& rows, int& columns, std::string file_path);
void copy_array(char** arr, char** copy, int rows, int columns);
void game_logic(char** arr, char** copy, int rows, int columns);
int compare_and_check(char** arr, char** arr2, int rows, int columns);
char** deleter(char** arr, int rows);

int main() {
	int rows{}, columns{};
	int i{1};
	char** arr = nullptr;
	char** copy = nullptr;
	std::string path = "game.txt";
	arr = readfile(rows, columns, path);
	if (arr == nullptr) {
		std::cerr << "Error: don`t creaty array!!!" << std::endl;
		return -1;
	}
	copy = creaty_array(rows, columns);
	if (copy == nullptr) {
		std::cerr << "Error: don`t creaty copy array!!!" << std::endl;
		arr = deleter(arr, rows);
		return -1;
	}
	copy_array(arr, copy, rows, columns);
	int code = compare_and_check(arr, copy, rows, columns);
	if (code == -1) {
		printh(arr, rows, columns, i);
		std::cout << "All cells are dead. Game over" << std::endl;
		arr = deleter(arr, rows);
		copy = deleter(copy, rows);
		return 0;
	}
	while(true){
		printh(arr, rows, columns, i);
		Sleep(1000);
		std::system("cls");
		game_logic(arr, copy, rows, columns);
		int code = compare_and_check(arr, copy, rows, columns);
		if (code == 1) {
			i++;
			printh(arr, rows, columns, i);
			std::cout << "The world has stagned. Game over" << std::endl;
			break;
		}
		else if(code == -1) {
			i++;
			printh(arr, rows, columns, i);
			std::cout << "All cells are dead. Game over" << std::endl;
			break;
		}
		else {
			i++;
			copy_array(arr, copy, rows, columns);
		}
		
	}

	arr = deleter(arr, rows);
	copy = deleter(copy, rows);
	return 0;
}

void printh(char** arr, int rows, int columns, int generation) {
	int count{};
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			std::cout << arr[i][j] << " ";
			if (arr[i][j] == '*')count++;
		}
		std::cout << "\n";
	}
	std::cout << "Generation: " << generation << ". Alive cells: " << count << std::endl;

}
char** readfile(int& rows, int& columns, std::string file_path) {
	std::ifstream file(file_path);
	if (file.is_open()) {
		file >> rows >> columns;
		char** arr = creaty_array(rows, columns);
		if (arr == nullptr) {
			file.close();
			return arr;
		}
		int index1{}, index2{};
		while (file >> index1 >> index2)
			arr[index1][index2] = '*';
		file.close();
		return arr;
	}
	else {
		std::cerr << "Error: file is not open!!!" << std::endl;
		return nullptr;
	}
}
void copy_array(char** arr, char** copy, int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			copy[i][j] = arr[i][j];
		}
	}
}
void game_logic(char** arr, char** copy, int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (i == 0 && j == 0) {
				int count{};
				if (copy[i + 1][j] == '*')count++;
				if (copy[i + 1][j + 1] == '*')count++;
				if (copy[i][j + 1] == '*')count++;
				if (copy[i][j] == '*' && count < 2 || count > 3) {
					arr[i][j] = '-';
				}
				else if (copy[i][j] == '-' && count == 3) {
					arr[i][j] = '*';
				}
			}
			else if (i == rows - 1 && j == 0) {
				int count{};
				if (copy[i - 1][j] == '*')count++;
				if (copy[i - 1][j + 1] == '*')count++;
				if (copy[i][j + 1] == '*')count++;
				
				if (copy[i][j] == '*' && count < 2 || count > 3) {
					arr[i][j] = '-';
				}
				
				else if (copy[i][j] == '-' && count == 3) {
					arr[i][j] = '*';
				}

			}
			else if (i == 0 && j == columns - 1) {
				int count{};
				if (copy[i + 1][j] == '*')count++;
				if (copy[i + 1][j - 1] == '*')count++;
				if (copy[i][j - 1] == '*')count++;
				
				if (copy[i][j] == '*' && count < 2 || count > 3) {
					arr[i][j] = '-';
				}
				
				else if (copy[i][j] == '-' && count == 3) {
					arr[i][j] = '*';
				}

			}
			else if (i == rows - 1 && j == columns - 1) {
				int count{};
				if (copy[i - 1][j] == '*')count++;
				if (copy[i - 1][j - 1] == '*')count++;
				if (copy[i][j - 1] == '*')count++;
				
				if (copy[i][j] == '*' && count < 2 || count > 3) {
					arr[i][j] = '-';
				}
				
				else if (copy[i][j] == '-' && count == 3) {
					arr[i][j] = '*';
				}

			}
			else if (j == 0 && i != 0) {
				int count{};
				if (copy[i + 1][j] == '*')count++;
				if (copy[i + 1][j + 1] == '*')count++;
				if (copy[i][j + 1] == '*')count++;
				if (copy[i - 1][j] == '*')count++;
				if (copy[i - 1][j + 1] == '*')count++;
				
				if (copy[i][j] == '*' && count < 2 || count > 3) {
					arr[i][j] = '-';
				}
				
				else if (copy[i][j] == '-' && count == 3) {
					arr[i][j] = '*';
				}
			}

			else if (j != 0 && i == 0) {
				int count{};
				if (copy[i + 1][j] == '*')count++;
				if (copy[i + 1][j + 1] == '*')count++;
				if (copy[i][j + 1] == '*')count++;
				if (copy[i + 1][j - 1] == '*')count++;
				if (copy[i][j - 1] == '*')count++;
				if (copy[i][j] == '*' && count < 2 || count > 3) {
					arr[i][j] = '-';
				}
				else if (copy[i][j] == '-' && count == 3) {
					arr[i][j] = '*';
				}
			}
			else if (j != 0 && i == rows -1) {
				int count{};
				if (copy[i][j + 1] == '*')count++;
				if (copy[i - 1][j] == '*')count++;
				if (copy[i - 1][j + 1] == '*')count++;
				if (copy[i][j - 1] == '*')count++;
				if (copy[i - 1][j - 1] == '*')count++;
				
				if (copy[i][j] == '*' && count < 2 || count > 3) {
					arr[i][j] = '-';
				}
				else if (copy[i][j] == '-' && count == 3) {
					arr[i][j] = '*';
				}
			}
			else if (j == columns - 1 && i != 0) {
				int count{};
				if (copy[i + 1][j] == '*')count++;
				if (copy[i - 1][j] == '*')count++;
				if (copy[i + 1][j - 1] == '*')count++;
				if (copy[i][j - 1] == '*')count++;
				if (copy[i - 1][j - 1] == '*')count++;
				
				if (copy[i][j] == '*' && count < 2 || count > 3) {
					arr[i][j] = '-';
				}
				else if (copy[i][j] == '-' && count == 3) {
					arr[i][j] = '*';
				}
			}
			else if (i > 0 && i < rows - 1 && j > 0 && j < columns - 1) {
				int count{};
				if (copy[i + 1][j] == '*')count++;
				if (copy[i + 1][j + 1] == '*')count++;
				if (copy[i][j + 1] == '*')count++;
				if (copy[i - 1][j] == '*')count++;
				if (copy[i - 1][j + 1] == '*')count++;
				if (copy[i + 1][j - 1] == '*')count++;
				if (copy[i][j - 1] == '*')count++;
				if (copy[i - 1][j - 1] == '*')count++;
				
				if (copy[i][j] == '*' && count < 2 || count > 3) {
					arr[i][j] = '-';
				}
				else if (copy[i][j] == '-' && count == 3) {
					arr[i][j] = '*';
				}
			}
		}
	}
}
int compare_and_check(char** arr, char** arr2, int rows, int columns) {
	bool found = false;
	int check{};
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (arr[i][j] == arr2[i][j])check++;
			if (arr[i][j] == '*')found = true;
		}
	}
	if (!found) {
		return -1;
	}
	if (check == (rows * columns)) {
		return 1;
	}
	return 0;
}
char** creaty_array(int rows, int columns) {
	char** arr = new (std::nothrow)char* [rows] {};
	if (!arr) {
		delete[] arr;
	}
	for (int i = 0; i < rows; i++) {
		arr[i] = new(std::nothrow) char[columns] {};
		if (!arr[i]) {
			for (int j = 0; j < i; j++) {
				delete[] arr[j];
			}
			delete[] arr;
			arr = nullptr;
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			arr[i][j] = '-';
		}
	}
	return arr;
}
char** deleter(char** arr, int rows) {
	if (arr != nullptr) {
		for (int i = 0; i < rows; i++) {
			delete[] arr[i];
		}
		delete[] arr;
		arr = nullptr;
	}
	else
	{
		std::cerr << "Error: deleted memory to nullptr" << std::endl;
	}
	return arr;
}
