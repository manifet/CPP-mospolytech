#include "Disposable.h"
#include "Gun.h"
#include <iostream>

void Disposable::Attack() 
{
    if (flag)
    {
        std::cout << "The weapon was used.\n";
    }
    else 
    {
        std::cout << "Attacking by disposable weapon.\n";
        flag = true;
    }
}