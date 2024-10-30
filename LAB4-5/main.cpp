#include "Gun.h"
#include "Gun.cpp"
#include "MagicWeapon.h"
#include "MagicWeapon.cpp"
#include "Player.h"
#include "Player.cpp"
#include "Disposable.h"
#include "Disposable.cpp"
#include "WeaponsInHands.h"
#include "WeaponsInHands.cpp"

int main()
{

    MagicWeapon mWeapon{};
    mWeapon.Attack();

    Disposable disp;

    disp.Attack();
    disp.Attack();

    WeaponsInHands weap{ 24, "asdf" };

    std::cout << "In left hand is " << weap.getLeftHand() << ". In right hand is " << weap.getRightHand() << '\n';

    weap.setLeftHand(9098);
    weap.setRightHand("239r");

    std::cout << "Now in left hans is " << weap.getLeftHand() << ". In right hand is " << weap.getRightHand() << '\n';

    return 0;
}