#include <iostream>
#include <string>
#include <windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    using std::cin;
    using std::cout;
    using std::endl;
    std::string sex, zodiac_sign;
    int age{};
    cout << "Введите пол(Мужчина, Женщина): " << endl;
    getline(cin, sex);
    cout << "Введите знак зодиака(Овен, Телец, Близнецы, Рак,  Лев, Дева, Весы, Скорпион, Стрелец, Козерог, Водолей, Рыбы): " << endl;
    getline(cin, zodiac_sign);
    cout << "Введите возраст: " << endl;
    cin >> age;

    if (sex == "Мужчина" && (zodiac_sign == "Рак" || zodiac_sign == "Скорпион" || zodiac_sign == "Рыбы") && (age > 0 && age < 40)) {
        cout << "Ваше предсказание:\n" << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным." << endl;
    }
    else if (sex == "Женщина" && (zodiac_sign == "Телец" || zodiac_sign == "Дева" || zodiac_sign == "Козерог") && (age >= 15 && age <= 30)) {
        cout << "Ваше предсказание:\n" << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок." << endl;
        cout << "Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех." << endl;
    }
    else cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)";

    return 0;
}