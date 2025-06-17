#include <iostream>
#include <windows.h>
int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[10]{ 2, 5, 7, 1, 3, 6, 15, 20, 22, 33 };
	size_t length = sizeof(arr) / sizeof(arr[0]);
	cout << "Массив: ";
	int min = arr[0];
	int max = arr[0];
	for (size_t i = 0; i < length; i++) {
		if (arr[i] > max)max = arr[i];
		if (arr[i] < min)min = arr[i];
		if (i == length - 1)
			cout << arr[i] << endl;
		else
			cout << arr[i] << ' ';
	}
	cout << "Минимальный элемент: " << min << endl;
	cout << "Максимальный элемент: " << max << endl;
}