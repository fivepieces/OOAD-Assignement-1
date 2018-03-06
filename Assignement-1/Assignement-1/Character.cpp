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
	std::cout << name << " : Has Died. " << std::endl;
	mainHand->~Weapon();
	offHand->~Weapon();
	delete this;
}

void Character::MainAttack(Weapon *_W)
{
	if (mainHand == nullptr)
	{
		std::cout << name << " : Has no Weapon in the Main Hand slot. " << std::endl;
	}

	else if (mainHand->type == "Sword")
	{
		std::cout << name << " Has Attacked For: " << _W->damage << std::endl;
	}

	else if (mainHand->type == "Bow")
	{
		std::cout << name << " Has Attacked For: " << _W->damage << std::endl;
	}
}

void Character::SecondaryAttack(Weapon *_W)
{
	if (offHand == nullptr)
	{
		std::cout << name << " : Has no Weapon in the Off Hand slot. " << std::endl;
	}

	else if (offHand->type == "Daggers")
	{
		std::cout << name << " Has Attacked For: " << _W->damage << std::endl;
	}
}

void Character::EquipMain(Weapon *_W)
{
	if (mainHand)
	{
		std::cout << "You already have a weapon in that slot, weapon will be destroyed" << std::endl;
	}

	std::cout << name << " has equiped: " << _W->type << " in the Main Hand" << std::endl;
	mainHand = _W;

	if (_W->type == "Sword")
	{
		_W->damage = 20;
	}
	
	if (_W->type == "Bow")
	{
		_W->damage = 15;
	}

}

void Character::EquipSecondary(Weapon *_W)
{

	if (offHand)
	{
		std::cout << "You already have a weapon in that slot, weapon will be destroyed" << std::endl;
	}

	std::cout << name << " has equiped: " << _W->type << " in the Off Hand" << std::endl;
	offHand = _W;

	if (_W->type == "Daggers")
	{
		_W->damage = 10;
	}
}
