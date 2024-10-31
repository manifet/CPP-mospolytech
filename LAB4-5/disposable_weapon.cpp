#include "disposable_weapon.h"

DisposableWeapon::DisposableWeapon(std::string weaponName, int weaponDamage, float weaponWeight, WeaponType weaponType)
    : Weapon(weaponName, weaponDamage, weaponWeight, weaponType), used(false) {}

DisposableWeapon::DisposableWeapon() : Weapon("Default Disposable Weapon", 10, 2.0, ONEHANDED), used(false) {}

void DisposableWeapon::Attack() {
    if (used) {
        std::cout << "Оружие уже было использовано." << std::endl;
    } else {
        std::cout << "Атакуем одноразовым оружием." << std::endl;
        used = true; 
    }
}
