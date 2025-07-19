//#include <iostream>
//#include <vector>
//#include <cstdlib>
//
//int main() {
//	srand(time(nullptr));
//	int arr[2][4];
//	std::vector <int> vec(4);
//	for (int i = 0; i < 2; ++i) {
//		for (int j = 0; j < 4; ++j) {
//			arr[i][j] = rand() % 10 + 1;
//			std::cout << arr[i][j] << " ";
//		}
//		std::cout << "\n";
//	}
//	for (int j = 0; j < 4; ++j) {
//		vec[j] = rand() % 5 + 1;
//		std::cout << vec[j] << std::endl;
//	}
//	int ar[2]{};
//	for (int i = 0; i < 2; ++i) {
//		for (int j = 0; j < 4; ++j) {
//			ar[i] += (vec[j] * arr[i][j]);
//			
//		}
//		std::cout << ar[i] << std::endl;
//	}
//	return 0;
//}