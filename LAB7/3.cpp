#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {

    double radius;
    std::cout << "Введите радиус окружности: ";
    std::cin >> radius;

    double circumference = 2 * M_PI * radius;
    std::cout << "Длина окружности: " << std::fixed << std::setprecision(3) 
              << circumference << std::endl;

    std::string input;
    std::ofstream outFile("text.txt", std::ios::app);

    while (true) {
        std::cout << "Введите произвольную строку (или 'read', 'erase', 'exit'): ";
        std::cin.ignore();
        std::getline(std::cin, input);

        if (input == "read") {
            std::ifstream inFile("text.txt");
            std::string line;
            std::cout << "Содержимое файла:" << std::endl;
            while (std::getline(inFile, line)) {
                std::cout << line << std::endl;
            }
        } else if (input == "erase") {
            std::ofstream outFile("text.txt", std::ios::trunc);
            outFile.close();
            std::cout << "Файл очищен." << std::endl;
        } else if (input == "exit") {
            break;
        } else {
            outFile << input << std::endl;
        }
    }

    outFile.close();
    return 0;
}
