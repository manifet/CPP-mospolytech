#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    
    int var = 10;
    int* ptr = &var;
    std::cout << "Адрес указателя: " << ptr << ", значение: " << *ptr << std::endl;
    *ptr = 20;
    std::cout << "Новое значение переменной: " << var << std::endl;

    int array[] = {1, 2, 3, 4, 5};
    std::cout << "Элементы массива: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << *(array + i) << " ";
    }
    std::cout << std::endl;

    int num = 5;
    int* const constPtr = &num;
    *constPtr = 10;
    std::cout << "Новое значение переменной num: " << num << std::endl;

    return 0;
}
