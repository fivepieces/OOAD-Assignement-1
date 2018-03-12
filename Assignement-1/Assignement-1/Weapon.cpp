#include "Weapon.h"


Weapon::Weapon(std::string _Name, std::string _Type, int _Damage)
{
	name = _Name;
	type = _Type;
	damage = _Damage;
}

Weapon::Weapon() {

}


Weapon::~Weapon()
{
	delete this;
}
