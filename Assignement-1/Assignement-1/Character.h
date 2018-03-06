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
	Weapon *mainHand;
	Weapon *offHand;

	//functions
	void MainAttack(Weapon *_W);
	void SecondaryAttack(Weapon *_W);
	void EquipMain(Weapon *_W);
	void EquipSecondary(Weapon *_W);
};

