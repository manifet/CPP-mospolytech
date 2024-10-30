#include <iostream>
#include <stdexcept>
#include <string>

class BirthYearError : public std::exception {
public:
    enum ErrorCode {
        INVALID_INPUT = 1,
        YEAR_TOO_LOW = 2,
        YEAR_TOO_HIGH = 3,
        NEGATIVE_NUMBER = 4
    };

    BirthYearError(ErrorCode code, const std::string& message)
        : code_(code), message_(message) {}

    const char* what() const noexcept override {
        return message_.c_str();
    }

    ErrorCode code() const {
        return code_;
    }

private:
    ErrorCode code_;
    std::string message_;
};

int main() {
    try {
        // Пункт 1
        int number;
        std::cout << "Введите число (1, 2 или 3): ";
        std::cin >> number;

        if (number == 1) {
            std::cout << "Один" << std::endl;
        } else if (number == 2) {
            std::cout << "Два" << std::endl;
        } else if (number == 3) {
            std::cout << "Три" << std::endl;
        } else {
            throw BirthYearError(BirthYearError::INVALID_INPUT, "Некорректное значение");
        }
    } catch (const BirthYearError& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        // Пункт 3
        int birth_year;
        std::cout << "Введите год вашего рождения: ";
        std::cin >> birth_year;

        // Пункт 4
        if (birth_year < 1850) {
            throw BirthYearError(BirthYearError::YEAR_TOO_LOW, "Что-то не верится...");
        }

        // Пункт 5
        const int current_year = 2024; // Текущий год
        if (birth_year > current_year) {
            throw BirthYearError(BirthYearError::YEAR_TOO_HIGH, "Вы ещё не родились");
        }

        // Пункт 6
        if (birth_year < 0) {
            throw BirthYearError(BirthYearError::NEGATIVE_NUMBER, "Вы ввели отрицательное число!");
        }

        // Пункт 7
        std::cout << "Спасибо!" << std::endl;

    } catch (const BirthYearError& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
