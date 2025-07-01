#include <iostream>
void print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
}

int main() {

	int array1[9]{1, 2, 3, 4, 5, 6, 7, 8, 9};
	int array2[4]{ 4, 12, 13, 24};
	int array3[5]{ 5, 6, 7, 8, 9 };
	std::cout << "Massive #1: ";
	print(array1, 9);
	std::cout << "\n";
	std::cout << "Massive #2: ";
	print(array2, 4);
	std::cout << "\n";
	std::cout << "Massive #3: ";
	print(array3, 5);
	return 0;
}