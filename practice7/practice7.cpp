#include <iostream>
#include "Warrior.h"

int main()
{
    Character* pHero = new Warrior;
    pHero->Attack();

    //((Warrior*)pHero)->DoubleSlash();
    Warrior* pWarrior = dynamic_cast<Warrior*>(pHero);
    if (pWarrior == nullptr)
    {
        std::cout << "Error" << std::endl;
    }
    else
    {
        pWarrior->DoubleSlash();
    }

    delete pHero;
}