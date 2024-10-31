#ifndef DISPOSABLE_WEAPON_H
#define DISPOSABLE_WEAPON_H

#include "weapon.h"

class DisposableWeapon : public Weapon {
private:
    bool used;

public:
    DisposableWeapon(std::string weaponName, int weaponDamage, float weaponWeight, WeaponType weaponType);
    DisposableWeapon(); 

    void Attack() override;
};

#endif
