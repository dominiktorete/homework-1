//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <string>
//#include <fstream>
//#include <iomanip>
//
//int coctail_sort(int* arr, int size) {
//	int count = 0;
//	bool found = false;
//	for(int k = 0; k < size; k++){
//		for (int i = 0, j = size-1; j > 0 && i < size-1; j--, i++) {
//			if (arr[i] > arr[i + 1]) {
//				count++;
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//				found = true;
//			}
//			else if (arr[j] < arr[j - 1]) {
//				count++;
//				int temp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = temp;
//				found = true;
//			}
//		}
//		if (!found)break;
//
//	}
//	return count;
//}
//
//int sort_choice(int* arr, int size) {
//	int count = 0;
//	for (int i = 0; i < size; i++) {
//		int min = arr[0];
//		int index = 0;
//		
//		for (int j = 0; j < size-i; j++) {
//			if (min > arr[j]) {
//				min = arr[j];
//				
//				index = j;
//				count++;
//			}
//		}
//		
//			for (int k = index; k < size-i-1; k++) {
//				arr[k] = arr[k + 1];
//			}
//			arr[size - 1 - i] = min;
//
//	}
//	return count;
//}
//void random_arr(int* arr, int size) {
//	srand(time(nullptr));
//
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 10 + 1;
//		std::cout << arr[i] << " ";
//	}
//	std::cout << "\n";
//}
//
//int main() {
//	setlocale(LC_ALL, "ru");
//	
//	int arr[10]{};
//	random_arr(arr, 10);
//	int count = coctail_sort(arr, 10);
//	for (int i = 0; i < 10; i++) {
//		std::cout << arr[i] << " ";
//	}
//	std::cout << "\n";
//	std::cout << count;
//	
//
//	return 0;
//}
