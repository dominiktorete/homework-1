//#include <iostream>
//#include <cstdlib>
//
//void quick_sort(int* arr, int start,  int end) {
//    if (start >= end) return;
//
//    // Берём первый элемент как опорный
//    int pivot = arr[rand() % (end + 1)];
//    int left = start;      // Индекс левого конца
//    int right = end;     // Индекс правого конца
//    int current = start;      // Текущий индекс
//
//    while (current <= right) {
//        if (arr[current] < pivot) {   // Если элемент меньше опорного
//            std::swap(arr[left], arr[current]);
//            ++left;
//            ++current;
//        }
//        else if (arr[current] > pivot) {  // Если элемент больше опорного
//            std::swap(arr[right], arr[current]);
//            --right;
//        }
//        else {                     // Если элемент равен опорному
//            ++current;
//        }
//    }
//
//    // Теперь массив разделён следующим образом:
//    // arr[low..i-1]: элементы меньше pivot
//    // arr[i..j]: элементы равны pivot
//    // arr[j+1..high]: элементы больше pivot
//
//    // Рекурсивная обработка левой и правой частей
//    quick_sort(arr, start, left - 1);
//    quick_sort(arr, right + 1, end);
//	
//
//}
//
//int main() {
//	setlocale(LC_ALL, "ru");
//	int arr[10]{ 1,3,2,4,4,4,9,7,8,10 };
//	srand(time(nullptr));
//	quick_sort(arr,0, 9);
//	for (int i = 0; i < 10; i++) {
//		std::cout << arr[i] << " ";
//	}
//	return 0;
//}