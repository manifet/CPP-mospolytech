#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");

    int myInt = 150;
    float myFloat = 15.933f;
    char myChar = 250;

    std::cout << "myInt = " << myInt << std::endl;
    std::cout << "myFloat = " << myFloat << std::endl;
    std::cout << "myChar = " << static_cast<int>(myChar) << std::endl;

    int birthDay = 20;
    std::string birthMonth = "Октябрь";
    int birthYear = 1995;

    std::cout << "Моя дата рождения: " << birthDay << " " << birthMonth << " " << birthYear << " года" << std::endl;

    const float PI = 3.14f;
    const std::string OS = "WINDOWS";

    std::cout << PI << " " << OS << std::endl;

    return 0;
}
