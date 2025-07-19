//#include <iostream>
//#include <vector>
//
//int main() {
//
//	int x{};
//	std::cout << "Enter to x: ";
//	std::cin >> x;
//	std::vector<double> y(1, x);
//	int i = 0;
//	do {
//		double yi = 0.5 * (y[i] + 3 * x / (2 * (y[i] * y[i]) + x / y[i]));
//		y.push_back(yi);
//		
//	} while (abs(y[y.size() - 1] - y[i++]) >= 0.00001);
//	std::cout << static_cast<int>(y[y.size() - 1]);
//	return 0;
//}