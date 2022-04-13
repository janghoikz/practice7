#include <iostream>
#include "Warrior.h"

int main()
{
    Character* pHero = new Warrior;
    pHero->Attack();
    ((Warrior*)pHero)->DoubleSlash();
    delete pHero;
}