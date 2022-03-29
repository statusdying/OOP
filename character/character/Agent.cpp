#include "Agent.h"
Agent::Agent(int id, int arms, int legs, string type, double price, string acsr, int SumAcsr, string gun, int buls) : Character(id, arms, legs, type, price)
{
	this->accessories = acsr;
	this->SumAccessories = SumAcsr;
	this->gun = gun;
	this->bullets = buls;
}

string Agent::getAcsr()
{
	return this->accessories;
}

int Agent::getSumAcsr()
{
	return this->SumAccessories;
}

int Agent::getBuls()
{
	return this->bullets;
}

string Agent::getGun()
{
	return this->gun;
}
