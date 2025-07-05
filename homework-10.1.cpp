#include <iostream>

int main(){
    setlocale(LC_ALL, "ru");
    int n{};
    std::cout << "Введите размер массива: ";
    std::cin >> n;
    int* arr = new int[n]{};
    if(arr != nullptr){
        for(int i = 0; i < n; i++){
            std::cout << "arr[" << i << "] = ";
            std::cin >> arr[i];
        } 
        std::cout << "Введённый массив: ";
        for(int i = 0; i < n; i++){
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