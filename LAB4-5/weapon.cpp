#include "weapon.h"

// Конструктор с параметрами
Weapon::Weapon(std::string weaponName, int weaponDamage, float weaponWeight, WeaponType weaponType)
    : name(weaponName), damage(weaponDamage), weight(weaponWeight), type(weaponType) {}

// Конструктор без параметров
Weapon::Weapon() : name("Default Weapon"), damage(10), weight(1.5), type(ONEHANDED) {}

// Деструктор
Weapon::~Weapon() {
    std::cout << "Weapon: " << name << ", Damage: " << damage << ", Weight: " << weight << " is being deleted." << std::endl;
}

// Геттеры
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

// Сеттер для урона
void Weapon::setDamage(int newDamage) {
    damage = newDamage;
}

// Метод для проверки веса
bool Weapon::canCarry(float maxWeight) const {
    return weight > maxWeight;
}

// Метод для вычисления суммарного веса
float Weapon::totalWeight(const Weapon& other) const {
    return weight + other.weight;
}

float Weapon::totalWeight(float otherWeight) const {
    return weight + otherWeight;
}

// Виртуальная функция для получения урона
int Weapon::getDamageValue() const {
    return damage;
}
