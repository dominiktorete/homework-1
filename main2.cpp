//#include <iostream>
//#include <initializer_list>
//template <typename T>
//class DynamicMassive {
//    T* ptr = nullptr;
//    size_t count = 0;
//    size_t capacity = 0;
//public:
//    DynamicMassive(){}
//    DynamicMassive(size_t _count ) : count(_count), capacity(_count){
//        ptr = new(T[capacity]);
//    }
//    DynamicMassive(std::initializer_list <T> list) : count(list.size()), capacity(list.size()) {
//        ptr = new(T[capacity]);
//        size_t i = 0;
//        for (auto& v : list) {
//            *(ptr + i) = v;
//            i++;
//        }
//    }
//    ~DynamicMassive() {
//        delete[] ptr;
//        std::cout << "Delete massive" << std::endl;
//        ptr = nullptr;
//    }
//    T* begin() {
//        T* ptr2 = ptr;
//        return ptr2;
//    }
//    T* end() {
//        T* ptr2 = (ptr + capacity);
//        return ptr2;
//    }
//    void resize(size_t new_sz) {
//        if (new_sz <= capacity)return;
//        capacity = new_sz;
//        T* pt_res = new(T[capacity]);
//        for (size_t i = 0; i <= count; i++) {
//            pt_res[i] = ptr[i];
//        }
//            delete[] ptr;
//            ptr = pt_res;
//        
//    }
//    void push_back(T k) {
//        if (count < capacity) {
//            ptr[count] = k;
//            count++;
//        }
//        else if (count >= capacity) {
//            resize(capacity * 2);
//            ptr[count] = k;
//            count++;
//        }
//    }
//    void pop_back() {
//        if (count > 0) {
//            count--;
//        }
//        else std::cout << "Massive is empty!" << std::endl;
//    }
//    int capacitys() {
//        return capacity;
//    }
//    int size() {
//        return count;
//    }
//    class Item {
//        DynamicMassive* current{ nullptr };
//        int index{ -1 };
//
//    public:
//        Item(DynamicMassive* obj, int idx) : current(obj), index(idx)
//        {
//        }
//
//        operator T() const {
//            if (index >= current->capacity || index < 0)
//                return -1;
//
//            return current->ptr[index];
//        }
//        T operator=(T right) const {
//            if (index >= current->capacity || index < 0)
//                return right; // размер массива data не может превышать max_length_array элементов
//
//            if (index >= current->capacity) {
//                current->resize(index + 1);
//            }
//
//            for (size_t i = current->count; i < index; ++i)
//                current->ptr[i] = 0;   // зануляем все новые добавленные значения
//
//            if (index >= current->count)
//                current->count = index + 1; // новый размер записанных данных
//
//            current->ptr[index] = right;
//            return right;
//        }
//    };
//    Item operator[](int index)
//    {
//        return Item(this, index);
//    }
//    
//    
//     
//};
//
//int main()
//{
//    DynamicMassive<double> arr{ '1','2', '3'};
//    arr.push_back('2');
//    arr.push_back('4');
//    arr.pop_back();
//    auto it = arr.begin();
//    std::cout << arr.capacitys() << arr.size();
//    return 0;
//}