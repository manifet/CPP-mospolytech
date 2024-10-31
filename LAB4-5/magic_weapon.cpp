#include "magic_weapon.h"

// Конструктор с параметрами
MagicWeapon::MagicWeapon(std::string weaponName, int weaponDamage, float weaponWeight, WeaponType weaponType, int extraDamage)
    : Weapon(weaponName, weaponDamage, weaponWeight, weaponType), additionalDamage(extraDamage) {}

// Конструктор без параметров
MagicWeapon::MagicWeapon() : Weapon("Default Magic Weapon", 15, 3.0, ONEHANDED), additionalDamage(5) {}

// Переопределение метода получения урона
int MagicWeapon::getDamageValue() const {
    return Weapon::getDamageValue() + additionalDamage; // Возвращаем сумму урона
}

// Реализация метода Attack
void MagicWeapon::Attack() {
    std::cout << "Атакуем магическим оружием" << std::endl;
}
