#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    using std::cout;
    using std::endl;
    cout << std::boolalpha;
    bool op1 = true;
    bool op2 = true;
    cout << "Оператор: ||" << endl;
    cout << op1 << '\t' << op2 << '\t' << (op1 || op2) << endl;
    cout << !op1 << '\t' << op2 << '\t' << (!op1 || op2) << endl;
    cout << op1 << '\t' << !op2 << '\t' << (op1 || !op2) << endl;
    cout << !op1 << '\t' << !op2 << '\t' << (!op1 || !op2) << endl;
    cout << "Оператор: &&" << endl;
    cout << op1 << '\t' << op2 << '\t' << (op1 && op2) << endl;
    cout << !op1 << '\t' << op2 << '\t' << (!op1 && op2) << endl;
    cout << op1 << '\t' << !op2 << '\t' << (op1 && !op2) << endl;
    cout << !op1 << '\t' << !op2 << '\t' << (!op1 && !op2) << endl;

    return 0;
}
