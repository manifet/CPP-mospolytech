#include <iostream>
#include "Player.h"

void Player::printCharacteristics() const
{
    std::cout << id << ' ' << login << ' ' << password << '\n';
}