#include <iostream>
#include <string>
#include <string_view>
#include "Gun.h"
#include "MagicWeapon.h"

Gun::Gun(const std::string& name, int damage, double weight, weapons::type type)
    : m_name { name }, m_damage { damage }, m_weight { weight }, m_type { type }
{
}

Gun::Gun()
    : Gun("Glock", 15, 0.89, weapons::crossbow)
{
}

std::string_view Gun::getName() const 
{
    return m_name;
}

double Gun::getDamage() const
{
    return m_damage;
}

double Gun::getWeight() const
{
    return m_weight;
}

weapons::type Gun::getType() const
{
    return m_type;
}

void Gun::setDamage(int damage) 
{
    m_damage = damage;
}

bool Gun::maxWeight(double weight) const 
{
    return (weight < m_weight ? true : false);
}

    
int Gun::sumWeight(int weight) const
{
    return m_weight + weight;
}

int Gun::sumWeight(const Gun& gun) const
{
    return sumWeight(gun.getWeight()) + m_weight;
}

Gun::~Gun()
{
    std::cout << m_name << ' ' << m_damage << ' ' << m_weight << '\n';
    std::cout << "The gun is deleting.\n";
}

bool operator<(const Gun& mWeapon, const MagicWeapon& weapon) { return mWeapon.getDamage() < weapon.getDamage(); }
bool operator>(const Gun& mWeapon, const MagicWeapon& weapon) { return mWeapon.getDamage() > weapon.getDamage(); }

bool operator<(const Gun& mWeapon, const Gun& weapon) { return mWeapon.getDamage() < weapon.getDamage(); }
bool operator>(const Gun& mWeapon, const Gun& weapon) { return operator<(weapon, mWeapon); }