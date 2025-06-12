#include <iostream>
#include <windows.h>
#include <limits.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    using std::cin;
    using std::cout;
    using std::endl;
    long long current_quantity;
    cout << "Введите целое число:" << endl;
    cin >> current_quantity;
    for (int i = 1; i <= 10; i++)
    {
        if (current_quantity * i <= LLONG_MAX) {
            cout << current_quantity << " x " << i << " = " << current_quantity * i << endl;
        }
        else {
            cout << "Произошло переполнение" << endl;
        }
    }



}