#include <iostream>
#include <windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    using std::cin;
    using std::cout;
    using std::endl;
    int quantity, sum = 0;
    cout << "Введите целое число:" << endl;
    cin >> quantity;
    while (quantity != 0) {
        sum += (quantity % 10);
        quantity /= 10;
    }
    cout << "Сумма цифр: " << sum;
}