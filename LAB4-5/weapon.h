#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>


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
    WeaponType type;

public:
    Weapon(std::string weaponName, int weaponDamage, float weaponWeight, WeaponType weaponType);
    Weapon(); 
    virtual ~Weapon();

    std::string getName() const;
    int getDamage() const;
    float getWeight() const;
    WeaponType getType() const; 


    void setDamage(int newDamage);

    bool canCarry(float maxWeight) const;


    float totalWeight(const Weapon& other) const;
    float totalWeight(float otherWeight) const;

    virtual int getDamageValue() const;
    
    virtual void Attack() = 0; 
};

#endif 
