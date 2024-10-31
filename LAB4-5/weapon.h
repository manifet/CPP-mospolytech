#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

// Перечисление типов оружия
enum WeaponType {
    ONEHANDED,
    TWOHANDED,
    BOW,
    CROSSBOW
};

class Weapon {
private:
    std::string name;
    int damage;
    float weight;
    WeaponType type; // Тип оружия

public:
    Weapon(std::string weaponName, int weaponDamage, float weaponWeight, WeaponType weaponType);
    Weapon(); // Конструктор без параметров
    virtual ~Weapon(); // Деструктор

    // Геттеры
    std::string getName() const;
    int getDamage() const;
    float getWeight() const;
    WeaponType getType() const; // Геттер для типа оружия

    // Сеттер для урона
    void setDamage(int newDamage);

    // Метод для проверки веса
    bool canCarry(float maxWeight) const;

    // Методы для вычисления суммарного веса
    float totalWeight(const Weapon& other) const;
    float totalWeight(float otherWeight) const;

    // Виртуальная функция для получения урона
    virtual int getDamageValue() const;
    
    // Чисто виртуальная функция для атаки
    virtual void Attack() = 0; // Абстрактный метод
};

#endif // WEAPON_H
