#include <iostream>
#include "Character.h"
#include "Weapon.h"
#include "Bow.h"
#include "Sword.h"
#include "Daggers.h"

int main()
{
	// Standered format for print string to console
	std::cout << " ~ Welcome ~ " << std::endl;

	// SPACER
	std::cout << "" << std::endl;

	// Init Player character and give it starting stats & weapon
	std::string pName = "Keith";

	// Pointer to the hardcoded weapons [ Name, Type ]
	Weapon *W_One = new Bow();
	Weapon *W_Two = new Sword();
	Weapon *W_Three = new Daggers();

	// SPACER
	std::cout << "" << std::endl;

	// Pointer to the players Character [ Name, Gold, HP ]
	Character* P = new Character(pName, 10);

	// SPACER
	std::cout << "" << std::endl;

	// Equip & Attack [ W1, Main Hand ]
	P->Equip(W_One);
	P->Attack(W_One);

	// SPACER
	std::cout << "" << std::endl;

	// Equip & Attack [ W2, Off Hand ]
	P->Equip(W_Two);
	P->Attack(W_Two);

	// SPACER
	std::cout << "" << std::endl;

	// Equip & Attack [ W3, Off Hand ]
	P->Equip(W_Three);
	P->Attack(W_Three);

	// SPACER
	std::cout << "" << std::endl;

	// Wait to close
	std::cout << "Press Enter to Quit Program " << std::endl;
	getchar();

	// 0 == Clean exit / no errors 
	return 0;
}