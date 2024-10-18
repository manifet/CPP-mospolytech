#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    
    int number;
    while (true) {
        std::cout << "Введите целое положительное число: ";
        std::cin >> number;
        if (number > 0) {
            break;
        }
    }

    int sum = 0;
    std::cout << "Сумма чисел от 1 до " << number << ": ";
    for (int i = 1; i <= number; ++i) {
        sum += i;
        std::cout << i;
        if (i < number) {
            std::cout << " + ";
        }
    }
    std::cout << " = " << sum << std::endl;

    int arr[10] = {5, 12, 7, 3, 20, 1, 18, 14, 9, 11};
    std::cout << "Массив: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i];
        if (i < 9) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Числа на четных позициях: ";
    for (int i = 0; i < 10; ++i) {
        if (i % 2 == 0) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;

    int oddSum = 0;
    for (int i = 0; i < 10; ++i) {
        if (i % 2 != 0) {
            oddSum += arr[i];
        }
    }
    std::cout << "Сумма элементов на нечетных позициях: " << oddSum << std::endl;

    return 0;
}
