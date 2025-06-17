#include <iostream>
const int MAX = 10;
void bublesort(int (&arr)[MAX]) {
	for (int i = 0; i < MAX - 1; i++) {
		bool flag = false;
		for (int j = MAX - 1; j - 1 >= (0 + i); j--) {
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
	int arr[MAX]{ 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };
	bublesort(arr);
	for (int i = 0; i < MAX; i++) {
		std::cout << arr[i] << " ";
	}
}