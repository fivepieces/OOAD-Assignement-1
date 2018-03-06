#include "Weapon.h"
#include <iostream>
#include <string>

Weapon::Weapon(std::string _Name, std::string _Type, int _Damage)
{
	name = _Name;
	type = _Type;
	damage = _Damage;
	std::cout << name << "Has been aquired" << std::endl;
}


Weapon::~Weapon()
{
	delete this;
}
