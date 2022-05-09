#include "Animals.h"
#include <iostream>
using namespace std;

int Animals::SumInstanc = 0;

int Animals::GetObjCount()				//pocet instanci
{
	return Animals::SumInstanc;
}

Animals::Animals(int id, string name, string space, int limbC, bool wings, string food, float dailyFood)
{	
	this->id = id;
	this->Name = name;
	this->Space = space;
	this->LimbCount = limbC;
	this->Wings = wings;
	this->FoodType = food;
	this->DialyFood = dailyFood;
	Animals::SumInstanc += 1;
}

Animals::~Animals()
{
	cout << "desktruktor" << endl;
	Animals::SumInstanc -= 1;
}

int Animals::getIdAnimal()
{
	return this->id;
}

string Animals::getName()
{
	return this->Name;
}

string Animals::getSpace()
{
	return this->Space;
}

int Animals::getLimbCount()
{
	return this->LimbCount;
}

bool Animals::getWings()
{
	return this->Wings;
}

string Animals::GetFoodType()
{
	return this->FoodType;
}

float Animals::getDialyFood()
{
	return this->DialyFood;
}

bool Animals::AbleToExist()
{
	return true;
}

