#ifndef WEAPONSINHANDS_H
#define WEAPONSINHANDS_H

template <typename T, typename L>
class WeaponsInHands
{
public:
    WeaponsInHands(const T& first, const L& second);     

    WeaponsInHands() = default;   

    T getLeftHand() const;

    L getRightHand() const;

    void setLeftHand(const T& weapon);

    void setRightHand(const L& weapon);
    
private:
    T m_leftHand{};
    L m_rightHand{};
};

#endif