#include <iostream>

void sumAndProduct(int a, int b, int& sumRef, int& productRef) {
    sumRef = a + b;
    productRef = a * b;
}

int calculateSum(int number = 1) {
    if (number <= 0) {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i <= number; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "Russian");
    
    int array2D[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int totalSum = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            totalSum += array2D[i][j];
        }
    }
    std::cout << "Сумма всех чисел в массиве: " << totalSum << std::endl;

    int columnSums[3] = {0};
    for (int j = 0; j < 3; ++j) {
        columnSums[j] = array2D[0][j] + array2D[1][j];
    }

    std::cout << "Одномерный массив сумм столбцов: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << columnSums[i] << " ";
    }
    std::cout << std::endl;

    float value = 20.84;
    float& ref1 = value;
    float& ref2 = value;
    ref1 = 30.5;

    std::cout << "Переменная value: " << value << ", ref2: " << ref2 << std::endl;

    std::cout << "Сумма от 1 до 5: " << calculateSum(5) << std::endl;
    std::cout << "Сумма от 0: " << calculateSum(0) << std::endl;
    std::cout << "Сумма по умолчанию: " << calculateSum() << std::endl;

    int sumRef, productRef;
    sumAndProduct(3, 4, sumRef, productRef);
    std::cout << "Сумма по ссылке: " << sumRef << ", Произведение по ссылке: " << productRef << std::endl;

    std::string anyVariable = "Привет, мир!";
    std::cout << anyVariable << std::endl;

    for (int i = 0; i < 3; ++i) {
        std::cout << "Вывод 3 раза: " << columnSums[0] << std::endl;
        int anotherVariable = 42;
        std::cout << "Еще одна переменная: " << anotherVariable << std::endl;
    }

    return 0;
}
