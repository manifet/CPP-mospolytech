#include "disposable_weapon.h"

// Конструктор с параметрами
DisposableWeapon::DisposableWeapon(std::string weaponName, int weaponDamage, float weaponWeight, WeaponType weaponType)
    : Weapon(weaponName, weaponDamage, weaponWeight, weaponType), used(false) {}

// Конструктор без параметров
DisposableWeapon::DisposableWeapon() : Weapon("Default Disposable Weapon", 10, 2.0, ONEHANDED), used(false) {}

// Реализация метода Attack
void DisposableWeapon::Attack() {
    if (used) {
        std::cout << "Оружие уже было использовано." << std::endl;
    } else {
        std::cout << "Атакуем одноразовым оружием." << std::endl;
        used = true; // Устанавливаем флаг использования
    }
}
