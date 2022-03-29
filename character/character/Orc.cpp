#include "Orc.h"

Orc::Orc(int id, int arms, int legs, string type, double price, string weap, double sharp, int pots, int lives) : Character(id, arms, legs, type, price)
{
	this->weapon = weap;
	this->sharpness = sharp;
	this->potions = pots;
	this->lives = lives;
}

string Orc::GetWeapon()
{
	return this->weapon;
}

double Orc::GetSharpness()
{
	return this->sharpness;
}

int Orc::getPotions()
{
	return this->potions;
}

int Orc::getLives()
{
	return this->lives;
}
