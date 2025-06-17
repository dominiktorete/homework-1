#include <iostream>

int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	
	int arr[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	size_t length = sizeof(arr) / sizeof(arr[0]);
	for (size_t i = 0; i < length; i++) {
		if (i == length - 1) 
			cout << arr[i] << endl;
		else 
			cout << arr[i] << ", ";
	}

}