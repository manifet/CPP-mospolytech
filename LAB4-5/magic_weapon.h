#ifndef MAGIC_WEAPON_H
#define MAGIC_WEAPON_H

#include "weapon.h"

class MagicWeapon : public Weapon {
private:
    int additionalDamage; 

public:
    MagicWeapon(std::string weaponName, int weaponDamage, float weaponWeight, WeaponType weaponType, int extraDamage);
    MagicWeapon(); 

    int getDamageValue() const override;

    void Attack() override;
};

#endif
