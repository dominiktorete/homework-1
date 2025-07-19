//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <memory>
//
//int main() {
//	
//	int i{};
//	int count{};
//	int* p = nullptr;
//
//	while (std::cin >> i) {
//		if (i < 0) {
//			if (p) {
//				delete[] p;
//				p = nullptr;
//				break;
//			}
//			else break;
//		}
//		else {
//			++count;
//			if(p){
//				int* pt = p;
//				p = new int[count];
//				for (int j = 0; j < count - 1; j++) {
//					p[j] = pt[j];
//				}
//				p[count - 1] = i;
//				delete[] pt;
//				pt = nullptr;
//			}
//			else {
//				p = new int[count];
//				p[0] = i;
//			}
//
//		}
//		for (int j = 0; j < count; j++) {
//			std::cout << p[j] << " ";
//		}
//	}
//
//	return 0;
//}