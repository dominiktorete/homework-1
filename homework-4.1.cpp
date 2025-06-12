#include <iostream>
#include <windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    using std::cin;
    using std::cout;
    using std::endl;
    int sum = 0, current_quantity;

    while (true) {
        cout << "Введите целое число или число \'0\', чтобы закончить:" << endl;
        cin >> current_quantity;
        if (current_quantity == 0)break;
        sum += current_quantity;
    }
    cout << "Сумма: " << sum;

    return 0;
}