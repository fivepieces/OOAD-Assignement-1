#include <iostream>
#include "Character.h"
#include "Weapon.h"

int main()
{
	// Standered format for print string to console
	std::cout << " ~ Welcome ~ " << std::endl;

	// SPACER
	std::cout << "" << std::endl;

	// Init Player character and give it starting stats & weapon
	std::string pName = "Keith";
	std::string wName = "Sword ";
	std::string wName2 = "Bow ";
	std::string wName3 = "Daggers ";

	// Pointer to the hardcoded weapons [ Name, Type
	Weapon *W_One = new Weapon(wName, "Sword", 0);
	Weapon *W_Two = new Weapon(wName2, "Bow", 0);
	Weapon *W_Three = new Weapon(wName3, "Daggers", 0);

	// SPACER
	std::cout << "" << std::endl;

	// Pointer to the players Character [ Name, Gold, HP ]
	Character* P = new Character(pName, 10);

	// SPACER
	std::cout << "" << std::endl;

	// Equip & Attack [ W1, Main Hand ]
	P->EquipMain(W_One);
	P->MainAttack(W_One);

	// SPACER
	std::cout << "" << std::endl;

	// Equip & Attack [ W2, Off Hand ]
	P->EquipMain(W_Two);
	P->MainAttack(W_Two);

	// SPACER
	std::cout << "" << std::endl;

	// Equip & Attack [ W3, Off Hand ]
	P->EquipSecondary(W_Three);
	P->SecondaryAttack(W_Three);

	// SPACER
	std::cout << "" << std::endl;

	// Wait to close
	std::cout << "Press Enter to Quit Program " << std::endl;
	getchar();

	// 0 == Clean exit / no errors 
	return 0;
}