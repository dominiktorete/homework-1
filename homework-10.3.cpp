#include <iostream>
#include <cassert>
long long** create_two_dim_array(int rows, int columns){
    assert(rows > 0 && rows < 100 && columns > 0 && columns < 100);

    long long** arr = new long long*[rows];
    if(arr == nullptr)return nullptr;
    for(int i = 0;i < rows; i++){
        arr[i] = new long long[columns];
        if(arr[i] == nullptr){
            for(int i = 0;i < rows; i++){
                if(arr[i] != nullptr)delete[] arr[i];
            }
            delete[] arr;
            return nullptr;
        }
    }
    return arr;
}

void fill_two_dim_array(long long** arr, int rows, int columns){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(i==0){
                arr[i][j] = j+1;
            }
            else if(j==0){
                arr[i][j] = i+1;
            }
            else{
                arr[i][j] = (i+1)*(j+1);
            }
        }
    }
}
void print_two_dim_array(long long** arr, int rows, int columns){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << arr[i][j] << "\t";
        }
        std::cout << "\n";
    }
}
void delete_two_dim_array(long long** arr, int rows){
    for(int i = 0; i < rows; i++){
        delete[] arr[i];
        arr[i] = nullptr;
    }
    delete[] arr;
    arr = nullptr;
}


int main(){
    setlocale(LC_ALL, "ru");
    int rows{}, columns{};
    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> columns;
    std::cout << "Таблица умножения: " << std::endl;
    long long** array = create_two_dim_array(rows, columns);
    if(array){
        fill_two_dim_array(array, rows, columns);
        print_two_dim_array(array, rows, columns);
        delete_two_dim_array(array,rows);
    }
    else{
        std::cout << "Error allocation memory!!!";
        return -1;
    }
    return 0;
}
