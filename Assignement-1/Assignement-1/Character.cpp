#include "Character.h"
#include <iostream>
#include <string>

Character::Character(std::string _Name, float _HP)
{
	name =	_Name;
	HP =	_HP;
	std::cout << name << " : Has joined the battle" << std::endl;
}


Character::~Character()
{
	std::cout << name << " : has died. " << std::endl;
	delete this;
}

void Character::Attack(Weapon *_W)
{
	if (_W->type == "Primary")
	{
		std::cout << name << " has attacked for: " << _W->damage << std::endl;
	}
	else if (_W->type == "Secondary")
	{
		std::cout << name << " has attacked for: " << _W->damage << std::endl;
	}
}


void Character::Equip(Weapon *_W)
{
	if (_W->type == "Primary")
	{
		std::cout << name << " Has equipped a " << _W->type << " weapon called: "<< _W->name << std::endl;
	}

	if (_W->type == "Secondary")
	{
		std::cout << name << " Has equipped a " << _W->type << " weapon called: " << _W->name << std::endl;
	}
}

