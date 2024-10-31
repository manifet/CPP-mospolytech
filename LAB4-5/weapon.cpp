#include "weapon.h"


Weapon::Weapon(std::string weaponName, int weaponDamage, float weaponWeight, WeaponType weaponType)
    : name(weaponName), damage(weaponDamage), weight(weaponWeight), type(weaponType) {}

Weapon::Weapon() : name("Default Weapon"), damage(10), weight(1.5), type(ONEHANDED) {}

Weapon::~Weapon() {
    std::cout << "Weapon: " << name << ", Damage: " << damage << ", Weight: " << weight << " is being deleted." << std::endl;
}

std::string Weapon::getName() const {
    return name;
}

int Weapon::getDamage() const {
    return damage;
}

float Weapon::getWeight() const {
    return weight;
}

WeaponType Weapon::getType() const {
    return type;
}

void Weapon::setDamage(int newDamage) {
    damage = newDamage;
}

bool Weapon::canCarry(float maxWeight) const {
    return weight > maxWeight;
}

float Weapon::totalWeight(const Weapon& other) const {
    return weight + other.weight;
}

float Weapon::totalWeight(float otherWeight) const {
    return weight + otherWeight;
}

int Weapon::getDamageValue() const {
    return damage;
}
