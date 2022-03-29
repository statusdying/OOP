#pragma once
#include "Character.h"
//Header pro tøídu Truck
class Orc : public Character {
private:
	string weapon;
	double sharpness;
	int potions;
	int lives;

public:
	Orc(int id, int arms, int legs, string type, double price, string weap, double sharp, int pots, int lives);
	
	string GetWeapon();
	double GetSharpness();
	int getPotions();
	int getLives();

};