#include <iostream>
#include <windows.h>
void bublesort(int (&arr)[10]) {
	for (int i = 0; i < 10; i++) {
		bool flag = false;
		for (int j = 9; j - 1 >= i; j--) {
			if (arr[j] < arr[j - 1]) {
				int item = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = item;
				flag = true;

			}
		}
		if (!flag)return;
	}

}
int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[10]{ 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };
	cout << "Массив до сортировки: ";
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i] << " ";
	}
	cout << "\n";
	bublesort(arr);
	cout << "Массив после сортировки: ";
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i] << " ";
	}
}
