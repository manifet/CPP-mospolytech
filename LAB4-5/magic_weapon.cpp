#include "magic_weapon.h"

MagicWeapon::MagicWeapon(std::string weaponName, int weaponDamage, float weaponWeight, WeaponType weaponType, int extraDamage)
    : Weapon(weaponName, weaponDamage, weaponWeight, weaponType), additionalDamage(extraDamage) {}

MagicWeapon::MagicWeapon() : Weapon("Default Magic Weapon", 15, 3.0, ONEHANDED), additionalDamage(5) {}

int MagicWeapon::getDamageValue() const {
    return Weapon::getDamageValue() + additionalDamage; 
}

void MagicWeapon::Attack() {
    std::cout << "Атакуем магическим оружием" << std::endl;
}
