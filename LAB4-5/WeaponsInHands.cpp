#include "WeaponsInHands.h"

template <typename T, typename L>
WeaponsInHands<T, L>::WeaponsInHands(const T& first, const L& second)
    : m_leftHand{ first }, m_rightHand{ second }
{
}

template <typename T, typename L>
T WeaponsInHands<T, L>::getLeftHand() const
{
    return m_leftHand;
}

template <typename T, typename L>
L WeaponsInHands<T, L>::getRightHand() const
{
    return m_rightHand;
}

template <typename T, typename L>
void WeaponsInHands<T, L>::setLeftHand(const T& weapon)
{
    m_leftHand = weapon;
}

template <typename T, typename L>
void WeaponsInHands<T, L>::setRightHand(const L& weapon)
{
    m_rightHand = weapon;
}