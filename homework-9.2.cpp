#include <iostream>
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	int a = 5, b = 8;
	int* pa = &a;
	int* pb = &b;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(pa, pb);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	return 0;
}