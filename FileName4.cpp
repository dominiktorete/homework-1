//#include <iostream>
//class A {
//protected:
//	int a = 0;
//	double len = 0.0;
//public:
//	A(){ std::cout << " constructor" << std::endl; }
//	A(int a_) : a(a_){ std::cout << " constructor" << std::endl; }
//	A(int a_, double len_) : A(a_) 
//	{
//		std::cout << " constructor" << std::endl;
//		len = len_;
//	}
//	
//	~A() {}
//	A& operator=(A&& other) noexcept {
//		a = other.a;
//		len = other.len;
//		std::cout << "operator= perem" << std::endl;
//		return *this;
//	}
//	A& operator=(const A& other) {
//		a = other.a;
//		len = other.len;
//		std::cout << "operator=" << std::endl;
//		return *this;
//	}
//	
//	A(A&& other) noexcept : a(other.a)
//	{
//		std::cout << "constructor perem" << std::endl;
//		len = other.len;
//
//	}
//	A(A& other){
//		a = other.a;
//		len = other.len;
//		std::cout << "constructor copy" << std::endl;
//	}
//	int get_a() {
//		return a;
//	}
//	void set_a(int a_) {
//		a = a_;
//	}
//	
//};
//template <typename T, typename U>
//class D {
//	T x{};
//	U y{};
//public:
//	D(T x_, U y_) : x(x_), y(y_) {
//		std::cout << "TU" << std::endl;
//	}
//};
//template <typename T>
//class D<T,int>{
//	T x{};
//	int y{};
//public:
//	D(T x_, int y_) : x(x_), y(y_) {
//		std::cout << "Ti" << std::endl;
//	}
//};
//template <>
//class D <int, double>{
//	int x{};
//	double y{};
//public:
//	D(int x_, double y_) : x(x_), y(y_) {
//		std::cout << "id" << std::endl;
//	}
//};
//
//template <typename T, typename U>
//void sq(T, U) {
//	T t;
//	U u;
//	t * u;
//}
//A get(int a) {
//		A d(a);
//		return d;
//	}
//void str(int a) {
//	try {
//		if (a < 0)throw "Error";
//	}catch (const char* e) {
//		std::cout << e << std::endl;
//		throw;
//	}
//	if (a == 0) throw 3;
//	else std::cout << "Success" << std::endl;
//}
//int main() {
//	sq<int>(2, 3.5);
//	A a1(3, 5.8);
//	//A a2 = a1;
//	A a3;
//	int r = 27;
//	a3 = get(r);
//	try {
//		str(0);
//	}
//	catch (const char* e) {
//		std::cout << e << "#2" << std::endl;
//	}
//	/*catch (int& e) {
//		std::cout << e << std::endl;
//	}*/
//	catch (...) {
//		std::cout << "other error";
//	}
//	D d(1, 2.2);
//	D i(2, "qrt");
//
//	return 0;
//}