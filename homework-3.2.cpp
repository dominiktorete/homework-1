#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    using std::cin;
    using std::cout;
    using std::endl;
    int one{}, two{}, three{};
    cout << "Введите первое число: " << endl;
    cin >> one;
    cout << "Введите второе число: " << endl;
    cin >> two;
    cout << "Введите третье число: " << endl;
    cin >> three;
    one > two ? (one > three ? (two > three
        ? cout << one << " " << two << " " << three
        : cout << one << " " << three << " " << two)
        : cout << three << " " << one << " " << two)
        : (two > three ? (one > three
        ? cout << two << " " << one << " " << three
        : cout << two << " " << three << " " << one)
        : cout << three << " " << two << " " << one);

    return 0;
}