#ifndef MAGIC_WEAPON_H
#define MAGIC_WEAPON_H

#include "weapon.h"

class MagicWeapon : public Weapon {
private:
    int additionalDamage; // Дополнительный урон

public:
    MagicWeapon(std::string weaponName, int weaponDamage, float weaponWeight, WeaponType weaponType, int extraDamage);
    MagicWeapon(); // Конструктор без параметров

    // Переопределение метода получения урона
    int getDamageValue() const override;

    // Реализация метода Attack
    void Attack() override;
};

#endif // MAGIC_WEAPON_H
