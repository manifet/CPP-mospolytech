#ifndef GUN_H
#define GUN_H

#include <string>
#include <string_view>

class MagicWeapon;

namespace weapons
{
    enum type
    {
        onehanded,
        twohanded,
        bow,
        crossbow,
        all_weapons
    };
}

class Gun
{
public:
    Gun(const std::string& name, int damage, double weight, weapons::type type);

    Gun();

    friend bool operator<(const Gun& mWeapon, const MagicWeapon& weapon);
    friend bool operator>(const Gun& mWeapon, const MagicWeapon& weapon);

    friend bool operator<(const Gun& mWeapon, const Gun& weapon);
    friend bool operator>(const Gun& mWeapon, const Gun& weapon);
    

    std::string_view getName() const;

    virtual double getDamage() const;

    double getWeight() const;

    weapons::type getType() const;

    void setDamage(int damage);

    bool maxWeight(double weight) const;

    
    int sumWeight(int weight) const;

    int sumWeight(const Gun& gun) const;

    virtual ~Gun();

    virtual void Attack() = 0;

private:
    std::string m_name{};
    int m_damage{};
    double m_weight{};  
    weapons::type m_type{};
};

#endif