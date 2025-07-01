#include <iostream>
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
			std::cout << arr[i] << " ";
	}
}
void reverse(int* arr, int size) {
	for (int i = 0; i < size/2; i++) {
		swap(&arr[i], &arr[size - i - 1]);// можно было бы не использовать адресную арифметику, но тогда пришлось бы поменять тип параметров в функции swap
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	int arr[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::cout << "Массив до функции reserve: ";
	print(arr, 10);
	std::cout << "\n";
	reverse(arr, 10);
	std::cout << "Массив после функции reserve: ";
	print(arr, 10);
	return 0;
}