//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <algorithm>
//int main() {
//	int d{}, b{};
//	srand(time(nullptr));
//	std::cout << "Enter to d and b: ";
//	std::cin >> d >> b;
//	double arr[10][10]{};
//
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			arr[i][j] = rand() % (b-d) + d + rand() % 1000 / 1000.000;
//			std::cout << arr[i][j] << "\t";
//		}
//		std::cout << "\n";
//	}
//	double x = arr[0][0];
//	int index_min{};
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (x > arr[i][j]) {
//				x = arr[i][j];
//				index_min = i;
//			}
//		}
//	}
//	std::cout << "Number row: " << index_min+1 << std::endl;
//	std::cout << "Min value: " << x << std::endl;
//	if (index_min != 0) {
//		std::swap(arr[0], arr[index_min]);
//	}
//	std::cout << "\n";
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			std::cout << arr[i][j] << "\t";
//		}
//		std::cout << "\n";
//	}
//	return 0;
//}