#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    double num1, num2;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    double average = (num1 + num2) / 2;
    std::cout << "Среднее арифметическое: " << average << std::endl;

    char operation;
    std::cout << "Введите знак операции (+, -, *, /): ";
    std::cin >> operation;

    /*
    if (operation == '+') {
        std::cout << "Результат: " << num1 + num2 << std::endl;
    } else if (operation == '-') {
        std::cout << "Результат: " << num1 - num2 << std::endl;
    } else if (operation == '*') {
        std::cout << "Результат: " << num1 * num2 << std::endl;
    } else if (operation == '/') {
        if (num2 != 0) {
            std::cout << "Результат: " << num1 / num2 << std::endl;
        } else {
            std::cout << "Ошибка: деление на ноль!" << std::endl;
        }
    } else {
        std::cout << "Некорректный знак операции!" << std::endl;
    }
    */

    switch (operation) {
        case '+':
            std::cout << "Результат: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Результат: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Результат: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Результат: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Ошибка: деление на ноль!" << std::endl;
            }
            break;
        default:
            std::cout << "Некорректный знак операции!" << std::endl;
            break;
    }

    return 0;
}
