#include "Character.h"

Character::Character(int id, int arms, int legs, string type, double price)
{
	this->id = id;
	this->arms = arms;
	this->legs = legs;
	this->type = type;
	this->price = price;
}

int Character::getID()
{
	return this->id;
}

int Character::getArms()
{
	return this->arms;
}

int Character::getLegs()
{
	return this->legs;
}

string Character::getType()
{
	return this->type;
}

double Character::getPrice()
{
	return this->price;
}
