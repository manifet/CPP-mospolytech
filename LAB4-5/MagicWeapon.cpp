#include "MagicWeapon.h"
#include "Gun.h"
#include <string>
#include <iostream>

MagicWeapon::MagicWeapon(const std::string& name, int damage, double weight, const weapons::type& type, double addDamage)
    : Gun(name, damage, weight, type), m_addDamage{ addDamage }
{
}

double MagicWeapon::getAddDamage() const
{
    return m_addDamage;
}

double MagicWeapon::getDamage() const
{
    return m_addDamage + Gun::getDamage();
}

MagicWeapon::~MagicWeapon()
{
}

bool operator<(const MagicWeapon& mWeapon, const Gun& weapon) { return mWeapon.getDamage() < weapon.getDamage(); }
bool operator>(const MagicWeapon& mWeapon, const Gun& weapon) { return mWeapon.getDamage() > weapon.getDamage(); }

bool operator<(const MagicWeapon& mWeapon, const MagicWeapon& weapon) { return mWeapon.getDamage() < weapon.getDamage(); }
bool operator>(const MagicWeapon& mWeapon, const MagicWeapon& weapon) { return operator<(weapon, mWeapon); }

void MagicWeapon::Attack()
{
    std::cout << "Attacking by magic damage.\n";
}