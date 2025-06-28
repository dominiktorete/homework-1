#include <iostream>

void counting_function();

int main(){
    setlocale(LC_ALL,"ru");
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
    return 0;
}

void counting_function(){
    static int value{};
    ++value;
    std::cout << "Количество вызовов функции counting_function(): " << value << std::endl;
}