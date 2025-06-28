#include <iostream>

static const int error_code = -12321312;

namespace sum{
    int calc(int x, int y){
        return x + y;
    }
}
namespace dif{
    int calc(int x, int y){
        return x - y;
    }
}
namespace mul{
    int calc(int x, int y){
        return x * y;
    }
}
namespace divide{
    int calc(int x, int y){
        if(y == 0){
            std::cout << "Ошибка: деление на ноль!!! Code: ";
            return error_code;
        }
        return x / y;
    }
}

int main(){
    setlocale(LC_ALL, "ru");
    int x = 6, y = 9;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "Сложение: " << sum::calc(x, y) << std::endl;
    std::cout << "Вычитание: " << dif::calc(x, y) << std::endl;
    std::cout << "Умножение: " << mul::calc(x, y) << std::endl;
    std::cout << "Деление: " << divide::calc(x, y) << std::endl;


    return 0;
}
