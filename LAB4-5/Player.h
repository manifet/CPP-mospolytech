#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

struct Player {
    int id; // Уникальный идентификатор
    std::string login; // Логин
    std::string password; // Пароль

    // Метод для вывода данных игрока
    void printInfo() const {
        std::cout << "Player ID: " << id << ", Login: " << login << ", Password: " << password << std::endl;
    }
};

#endif // PLAYER_H
