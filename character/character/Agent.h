#pragma once
#include "Character.h"
class Agent : public Character {
private:
	string accessories;
	int SumAccessories;
	string gun;
	int bullets;

public:
	Agent(int id, int arms, int legs, string type, double price, string acsr, int SumAcsr, string gun, int buls);
	string getAcsr();
	int getSumAcsr();
	int getBuls();
	string getGun();
};