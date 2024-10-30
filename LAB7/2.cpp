#include <iostream>
#include <regex>
#include <string>

int main() {
    std::string name;
    std::cout << "Введите ваше имя: ";
    std::getline(std::cin, name);

    std::regex nameRegex("^[A-Z][a-zA-Z]{1,31}$");
    if (!std::regex_match(name, nameRegex)) {
        std::cout << "Некорректное имя." << std::endl;
        return 1;
    }

    std::string text = "Проверка email: test@example.com, example@test.com, user@domain.com";
    std::regex emailRegex(R"((\w+@\w+\.\w+))");
    std::sregex_iterator it(text.begin(), text.end(), emailRegex);
    std::sregex_iterator end;

    std::cout << "Найденные e-mail адреса:" << std::endl;
    while (it != end) {
        std::cout << it->str() << std::endl;
        ++it;
    }

    return 0;
}
