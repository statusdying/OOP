#include <iostream>

#include "Character.h"
#include "Agent.h"
#include "Orc.h"

using namespace std;

int main()
{

	Agent* Agent1 = new Agent(1, 2, 2, "GIGN", 1500, "Explosive Granades", 2, "P9", 200); //Vytvoří objekt třídy Car
	Agent* Agent2 = new Agent(2, 2, 2, "SWAT", 2000, "Smoke Granades", 3, "R4-C", 180); //Vytvoří objekt třídy Car

	cout << "Agents:" << endl;
	cout << "ID \t Arms \t Legs \t type \t price \t|| weapon bullets       acessories \t\t sum of accessories\t" << endl;
	cout << Agent1->getID() << " \t " << Agent1->getArms() << " \t " << Agent1->getLegs() << " \t " << Agent1->getType() << " \t   " << Agent1->getPrice() << "    " << Agent1->getGun() << "\t  " << Agent1->getBuls()<< "\t \t" << Agent1->getAcsr() << " \t " << Agent1->getSumAcsr()   << endl;
	cout << Agent2->getID() << " \t " << Agent2->getArms() << " \t " << Agent2->getLegs() << " \t " << Agent2->getType() << " \t   " << Agent2->getPrice() << "    " << Agent2->getGun() << "\t  " << Agent1->getBuls()<< "\t \t" << Agent2->getAcsr() << " \t \t " << Agent2->getSumAcsr()   << endl;

	Orc* Orc1 = new Orc(3, 3, 2, "Berserk", 1500, "Sword", 5.5, 5, 3);
	Orc* Orc2 = new Orc(4, 2, 3, "Ninja", 2500, "Knife", 8, 2, 2);
	cout << endl;
	cout << "Orcs:" << endl;
	cout << "ID \t Arms \t Legs \t type \t        price || weapon  sharpness      pots \t lives\t" << endl;
	cout << Orc1->getID() << " \t " << Orc1->getArms() << " \t " << Orc1->getLegs() << " \t " << Orc1->getType() << " \t" << Orc1->getPrice() << " \t " << Orc1->GetWeapon() << " \t " << Orc1->GetSharpness() << "\t \t" << Orc1->getPotions() << "\t " << Orc1->getLives() << endl;
	cout << Orc2->getID() << " \t " << Orc2->getArms() << " \t " << Orc2->getLegs() << " \t " << Orc2->getType() << " \t  \t" << Orc2->getPrice() << " \t " << Orc2->GetWeapon() << " \t " << Orc2->GetSharpness() << "\t \t" << Orc2->getPotions() << "\t " << Orc2->getLives() << endl;

	//delete Fcar, Ftruck;

	return 0;
}