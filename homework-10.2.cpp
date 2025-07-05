#include <iostream>
#include <cassert>
double* create_array(int size){
    assert(size > 0 && size < 100);

    double* d = new double[size]{};
    return d;
}
int main(){
    setlocale(LC_ALL, "ru");
    int size{};
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    double* arr = create_array(size);
    if(arr != nullptr){
        std::cout << "Массив: ";
        for(int i = 0; i < size; i++){
            std::cout << arr[i] << " ";
        } 
        
        delete[] arr;
        arr = nullptr;
    }
    else{ std::cout << "Error allocation memory!!!";
        return -1;
    }
    return 0;
}
