//#include <iostream>
//#include <vector>
//
//std::vector<int> mergelist(std::vector<int>& a1, std::vector<int>& a2) {
//	size_t N = a1.size();
//	size_t M = a2.size();
//	size_t i{}, j{};
//	std::vector<int> c{};
//	while (i < N && j < M) {
//		if (a1[i] <= a2[j]) {
//			c.push_back(a1[i++]);
//			
//		}
//		else {
//			c.push_back(a2[j++]);
//			
//		}
//	}
//	while (i < N) {
//		c.push_back(a1[i++]);
//	}
//	while (j < M) {
//		c.push_back(a2[j++]);
//	}
//	return c;
//}
//void merge_sort(std::vector<int>& vec) {
//	size_t N = vec.size() / 2;
//	std::vector<int> vec1{};
//	std::vector<int> vec2{};
//	copy(vec.begin(), vec.begin() + N, back_inserter(vec1));
//	copy(vec.begin() + N, vec.end(), back_inserter(vec2));
//	if (vec1.size() > 1) {
//		merge_sort(vec1);
//	}
//	if (vec2.size() > 1) {
//		merge_sort(vec2);
//	}
//	vec = mergelist(vec1, vec2);
//
//}
//int main() {
//	std::vector<int> vec{ 1,5,2,6,3,6,8,10,22,9,4,7 };
//	merge_sort(vec);
//
//	for (auto& it : vec) {
//		std::cout << it << " ";
//	}
//	
//	return 0;
//}