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

// Инициализация статической переменной
int MyMath::callCount = 0;

int main() {
    // Создание объектов оружия
    Weapon* weapon1 = new MagicWeapon("Magic Sword", 15, 3.0, ONEHANDED, 5);
    Weapon* weapon2 = new DisposableWeapon("Disposable Dagger", 10, 1.5, ONEHANDED);

    // Вывод значений обоих объектов
    std::cout << "Weapon 1: " << weapon1->getName() << ", Damage: " << weapon1->getDamageValue() << ", Weight: " << weapon1->getWeight() << std::endl;
    std::cout << "Weapon 2: " << weapon2->getName() << ", Damage: " << weapon2->getDamageValue() << ", Weight: " << weapon2->getWeight() << std::endl;

    // Вывод типа оружия
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

    // Создание экземпляра класса Player и вывод информации
    Player player;
    player.id = 1;
    player.login = "Player1";
    player.password = "password123";
    player.printInfo();

    // Тестирование Attack методов
    weapon1->Attack(); // Атакуем магическим оружием
    weapon2->Attack(); // Атакуем одноразовым оружием
    weapon2->Attack(); // Попытка повторной атаки

    // Тестирование MyMath
    std::cout << "Add: " << MyMath::Add(5, 3) << std::endl;
    std::cout << "Sub: " << MyMath::Sub(5, 3) << std::endl;
    std::cout << "Mult: " << MyMath::Mult(5, 3) << std::endl;
    std::cout << "Div: " << MyMath::Div(5, 3) << std::endl;
    std::cout << "Call Count: " << MyMath::callCount << std::endl;

    // Освобождение памяти
    delete weapon1;
    delete weapon2;

    return 0;
}
