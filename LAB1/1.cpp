#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    
    std::cout << "First string" << std::endl;

    std::cout << "Первая строка\nВторая строка" << std::endl;

    std::cout << "Спецсимволы \"\\\"." << std::endl;

    return 0;
}
