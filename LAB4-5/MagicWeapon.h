#ifndef MAGICWEAPON_H
#define MAGICWEAPON_H

#include <string>
#include "Gun.h"

class Gun;

class MagicWeapon : public Gun
{
public:
    MagicWeapon(const std::string& name, int damage, double weight, const weapons::type& type, double addDamage);

    MagicWeapon() = default;

    double getAddDamage() const;

    double getDamage() const override;

    ~MagicWeapon() override;

    void Attack() override;

private:
    double m_addDamage{};

    friend bool operator<(const MagicWeapon& mWeapon, const Gun& weapon);
    friend bool operator>(const MagicWeapon& mWeapon, const Gun& weapon);

    friend bool operator<(const MagicWeapon& mWeapon, const MagicWeapon& weapon);
    friend bool operator>(const MagicWeapon& mWeapon, const MagicWeapon& weapon);
};

#endif