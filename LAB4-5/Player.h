#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

struct Player {
    int id; 
    std::string login; 
    std::string password; 

    void printInfo() const {
        std::cout << "Player ID: " << id << ", Login: " << login << ", Password: " << password << std::endl;
    }
};

#endif 
