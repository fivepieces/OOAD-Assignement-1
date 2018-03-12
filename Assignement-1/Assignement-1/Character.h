#pragma once
#include <iostream>
#include "Weapon.h"
class Character
{
public:

	//Constructor and Deconstructor
	Character(std::string _Name, float _HP);
	~Character();

	//Variables
	std::string name;
	float HP;

	//functions
	void Attack(Weapon *_W);
	void Equip(Weapon *_W);
};

