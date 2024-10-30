#include <iostream>
#include <string>

int main() {
    std::string inputString;
    std::cout << "Введите строку: ";
    std::getline(std::cin, inputString);


    if (inputString.length() >= 4) {
        std::cout << "Подстрока от 2-го до 4-го символа: " 
                  << inputString.substr(1, 3) << std::endl; // индексы с 0
    } else {
        std::cout << "Строка слишком короткая." << std::endl;
    }

    size_t position = inputString.find('a');
    if (position != std::string::npos) {
        std::cout << "Индекс первого вхождения 'a': " << position << std::endl;
    } else {
        std::cout << "Символа 'a' не найдено." << std::endl;
    }

    return 0;
}
