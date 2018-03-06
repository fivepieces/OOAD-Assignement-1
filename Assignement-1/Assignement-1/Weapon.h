#pragma once
#include <iostream>
class Weapon
{
public:

	//Constructor and Deconstructor
	Weapon(std::string _Name, std::string _Type, int _Damage);
	~Weapon();

	//Variables
	std::string name;
	std::string type;
	int damage;
	
};

