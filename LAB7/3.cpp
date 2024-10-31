#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>

int main() {
    
    double radius;
    std::cout << "Введите радиус окружности: ";
    std::cin >> radius;

    double circumference = 2 * 3.14 * radius;
    
    std::cout << "Длина окружности: " << std::fixed << std::setprecision(3) << circumference << std::endl;

    std::string filePath = "3.txt"; 
    std::string userInput;

    while (true) {
        std::cout << "Введите произвольную строку (или команды read, erase, exit): ";
        std::cin >> userInput;

        if (userInput == "read") {
            std::ifstream file(filePath);
            if (file.is_open()) {
                std::string line;
                std::cout << "Содержимое файла:" << std::endl;
                while (getline(file, line)) {
                    std::cout << line << std::endl;
                }
                file.close();
            } else {
                std::cout << "Файл не найден или не может быть открыт." << std::endl;
            }
        } else if (userInput == "erase") {
            std::ofstream file(filePath, std::ios::trunc);
            file.close();
            std::cout << "Файл очищен." << std::endl;
        } else if (userInput == "exit") {
            std::cout << "Выход из программы." << std::endl;
            break;
        } else {
            std::ofstream file(filePath, std::ios::app);
            if (file.is_open()) {
                file << userInput << std::endl;
                file.close();
            } else {
                std::cout << "Ошибка при записи в файл." << std::endl;
            }
        }
    }
    return 0;
}
