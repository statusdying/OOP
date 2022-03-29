#pragma once
#include <iostream>
#include <string>
using namespace std;

class Character {

private:
	int id;
	int arms;
	int legs;
	string type;
	double price;

public:
	Character(int id, int arms, int legs, string type, double price);

	int getID();
	int getArms();
	int getLegs();
	string getType();
	double getPrice();

};
