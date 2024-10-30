#ifndef PLAYER_H
#define PLAYER_H

#include <string>

struct Player
{
    int id{};
    std::string login{};
    std::string password{};

    void printCharacteristics() const;
};

#endif