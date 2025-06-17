#include <iostream>
#include <windows.h>
int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[3][6]{ 
		{1, 2, 3, 4, 5, 6},
		{15, 7, 8, 22, 33, 41},
		{123, 333, 231, 221, 71, 31}
	};
	int max = arr[0][0];
	int min = arr[0][0];
	int indexmax1{}, indexmax2{};
	int indexmin1{}, indexmin2{};
	cout << "Массив: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				indexmax1 = i;
				indexmax2 = j;
			}
			if (arr[i][j] < min) {
				min = arr[i][j];
				indexmin1 = i;
				indexmin2 = j;
			}
			
			if (j == 5)
				cout << arr[i][j] << endl;
			else
				cout << arr[i][j] << '\t';
		}
	}
	cout << "Индекс минимального элемента: " << indexmin1 << ' ' << indexmin2 << endl;
	cout << "Индекс максимального элемента: " << indexmax1 << ' ' << indexmax2 << endl;

}