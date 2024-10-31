#ifndef DISPOSABLE_WEAPON_H
#define DISPOSABLE_WEAPON_H

#include "weapon.h"

class DisposableWeapon : public Weapon {
private:
    bool used; // Флаг использования оружия

public:
    DisposableWeapon(std::string weaponName, int weaponDamage, float weaponWeight, WeaponType weaponType);
    DisposableWeapon(); // Конструктор без параметров

    // Реализация метода Attack
    void Attack() override;
};

#endif // DISPOSABLE_WEAPON_H
