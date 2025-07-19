//#include <iostream>
//struct A {
//	int x = 1;
//	A() {
//		std::cout << "A" << std::endl;
//	}
//	virtual ~A(){
//		std::cout << "~A" << std::endl;
//	}
//};
//struct B :virtual A{
//	int y = 13;
//	B(){
//		std::cout << "B" << std::endl;
//	}
//	virtual ~B() {
//		std::cout << "~B" << std::endl;
//	}
//};
//struct C :virtual A {
//	int c = 12;
//	C() {
//		std::cout << "C" << std::endl;
//	}
//	virtual ~C() {
//		std::cout << "~C" << std::endl;
//	}
//};
//struct D : C, B{
//	int d = 14;
//	D() {
//		std::cout << "D" << std::endl;
//	}
//	virtual ~D() {
//		std::cout << "~D" << std::endl;
//	}
//};
//int main() {
//	using std::cout;
//	using std::endl;
//	B* c = new B();	
//	cout << c->y << endl;
//	D* r = reinterpret_cast<D*>(c);
//	cout << r->c;
//	/*A* a2 = new B();
//	D* B2 = dynamic_cast<D*>(a2);
//	if(B2)
//		cout << B2->d << " " << B2->c << endl;
//	delete a2;*/
//	//B b;
//	/*int x = 45;
//	double b = 23.323;
//	char ch;
//	float f = static_cast<float> (b);
//	ch = static_cast<double> (f);
//	cout << ch;*/
//	/*B b3;
//	A a3 = static_cast<A>(b3);
//	cout << a3.x << " " << endl;
//	A* a2 = new B();
//	B* B2 = static_cast<B*>(a2);
//	cout << B2->x << " " << B2->y << endl;
//	B B1 = static_cast<B&>(a);
//	cout << B1.x << " " << B1.y << endl;*/
//	return 0;
//}