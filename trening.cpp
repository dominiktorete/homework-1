//#include <iostream>
//#include <cmath> 
//#include <utility>
//#include <string>
//#include <memory>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <map>
//#include <forward_list>
//#include <list>
//#include <sstream>
////void sort(int (&arr)[10]) {
////	for (int i = 1; i < 10; i++) {
////		for (int j = i - 1; j >= 0; j--) {
////			if (arr[j] > arr[j + 1]) {
////				std::swap(arr[j], arr[j + 1]);
////			}
////			else break;
////		}
////	}
////}
////void sort_2(int(&arr)[10]) {
////
////}
////template<typename Container>
////void pt(Container data) {
////	for (auto& r : data) {
////		std::cout << r << " ";
////	}
////}
////void funk(std::vector<std::string>& names, std::vector<std::string>& str){
////	 
////}
//int main() {
//	
//	using std::cin;
//	using std::cout;
//	using std::endl;
//
//		std::map<char, int> ch;
//		std::string str;
//		int count = 0;
//		while (true) {
//			getline(std::cin, str);
//			if (str.empty())break;
//			count++;
//			std::set<char> w(str.begin(), str.end());
//			for (char c : w) {
//				ch[c]++;
//			}
//		}
//		for (const auto& [c, i] : ch) {
//			if (i == count) {
//				std::cout << c;
//			}
//		}
//	
//	/*std::vector<int> vec1{ 1,3,4,56 };
//	vec1.resize(vec1.size()*2);
//	std::vector<std::string> vec;
//	std::string buff{};
//	std::string str{};
//	std::list<std::string> lst;
//	while (true) {
//		getline(cin, str);
//		if (str.empty()) {
//			break;
//		}
//		lst.push_back(str);
//	}
//	auto it = lst.begin();
//	while (getline(cin, str)) {
//		if (str == "Ctrl+X") {
//			buff = std::move(*it);
//			it = lst.erase(it);
//		}
//		else if (str == "Ctrl+V") {
//			lst.insert(it, buff);
//		}
//		else if (str == "Down") {
//			if (it == (lst.end()))continue;
//			else ++it;
//		}
//		else if (str == "Up") {
//			if (it == lst.begin())continue;
//			else --it;
//		}
//		if (str.empty()) {
//			break;
//		}
//	}
//	for (std::list<std::string>::iterator i = lst.begin(); i != lst.end(); ++i) {
//		cout << *i << std::endl;
//	}*/
//	/*std::vector<std::string> name;
//	int N{};
//	int M{};
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		std::string string1{};
//		std::string string2{};
//		cin >> string1 >> string2;
//		if (string2 == "top")
//			name.insert(name.begin(), string1);
//		else
//			name.push_back(string1);
//	}
//	cin >> M;
//	std::vector<std::string> vec;
//	for (int i = 0; i < M; i++) {
//		int j{};
//		cin >> j;
//		vec.push_back(name[j - 1]);
//	}
//	for (size_t i = 0; i < vec.size(); i++) {
//		cout << vec[i] << endl;
//	}*/
//	/*int x = 14;
//	void* p = &x;
//	cout << p << endl;
//	int* d = reinterpret_cast <int*>(p);
//	cout << d << endl;
//	cout << *d << endl;*/
//	/*int arr[10]{ 5, 12, 2, 3, 1 ,7, 8, 6, 9 , 22 };
//	sort(arr);
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << " ";
//	}*/
//	/*std::initializer_list list{ 1,2,3,4,5,6,7 };
//	std::weak_ptr<std::vector<int>> sp = std::make_shared<std::vector<int>>( list );
//	std::shared_ptr<std::vector<int>> sp2 = sp.lock();
//	std::vector<int>* vecs = sp2.get();
//	vecs->push_back(12);*/
//
//
//
//	return EXIT_SUCCESS;
//}