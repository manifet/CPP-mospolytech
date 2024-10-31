#include <iostream>
#include "weapon.h"
#include "magic_weapon.h"
#include "disposable_weapon.h"
#include "player.h"

class MyMath {
public:
    static int callCount;

    static int Add(int a, int b) {
        callCount++;
        return a + b;
    }

    static int Sub(int a, int b) {
        callCount++;
        return a - b;
    }

    static int Mult(int a, int b) {
        callCount++;
        return a * b;
    }

    static double Div(double a, double b) {
        callCount++;
        return b != 0 ? a / b : 0;
    }
};

int MyMath::callCount = 0;

int main() {

    Weapon* weapon1 = new MagicWeapon("Magic Sword", 15, 3.0, ONEHANDED, 5);
    Weapon* weapon2 = new DisposableWeapon("Disposable Dagger", 10, 1.5, ONEHANDED);

    std::cout << "Weapon 1: " << weapon1->getName() << ", Damage: " << weapon1->getDamageValue() << ", Weight: " << weapon1->getWeight() << std::endl;
    std::cout << "Weapon 2: " << weapon2->getName() << ", Damage: " << weapon2->getDamageValue() << ", Weight: " << weapon2->getWeight() << std::endl;


    switch (weapon1->getType()) {
        case ONEHANDED:
            std::cout << "Одноручное оружие" << std::endl;
            break;
        case TWOHANDED:
            std::cout << "Двуручное оружие" << std::endl;
            break;
        case BOW:
            std::cout << "Лук" << std::endl;
            break;
        case CROSSBOW:
            std::cout << "Арбалет" << std::endl;
            break;
    }


    Player player;
    player.id = 1;
    player.login = "Player1";
    player.password = "password123";
    player.printInfo();

    weapon1->Attack(); 
    weapon2->Attack(); 
    weapon2->Attack();

    std::cout << "Add: " << MyMath::Add(5, 3) << std::endl;
    std::cout << "Sub: " << MyMath::Sub(5, 3) << std::endl;
    std::cout << "Mult: " << MyMath::Mult(5, 3) << std::endl;
    std::cout << "Div: " << MyMath::Div(5, 3) << std::endl;
    std::cout << "Call Count: " << MyMath::callCount << std::endl;

    delete weapon1;
    delete weapon2;

    return 0;
}
