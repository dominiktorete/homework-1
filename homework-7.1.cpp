#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    using std::cin;
    using std::cout;
    using std::endl;
    short sh{};
    int in{};
    long l{};
    long long ll{};
    float fl{};
    double db{};
    long double ld{};
    bool bl{};
    cout << "Short: " << &sh << " " << sizeof(sh) << endl;
    cout << "Int: " << &in << " " << sizeof(in) << endl;
    cout << "Long: " << &l << " " << sizeof(l) << endl;
    cout << "Long long: " << &ll << " " << sizeof(ll) << endl;
    cout << "Float: " << &fl << " " << sizeof(fl) << endl;
    cout << "Double: " << &db << " " << sizeof(db) << endl;
    cout << "Long double: " << &ld << " " << sizeof(ld) << endl;
    cout << "Bool: " << &bl << " " << sizeof(bl) << endl;


    return 0;
}