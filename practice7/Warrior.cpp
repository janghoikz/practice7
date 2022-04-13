#include "Warrior.h"

Warrior::Warrior()
{
	std::cout << " +[Warrior] Created!" << std::endl;
}

Warrior::~Warrior()
{
	std::cout << "-[Warrior] Destructed!" << std::endl;
}

void Warrior::Attack() const
{
	std::cout << "\tÀü»ç´Â °ËÀ» ÈÖµÑ·¶´Ù!" << std::endl;
}

void Warrior::DoubleSlash() const
{
	std::cout << "\tÀü»ç´Â °ËÀ» µÎ¹ø ÈÖµÑ·¶´Ù." << std::endl;
}
