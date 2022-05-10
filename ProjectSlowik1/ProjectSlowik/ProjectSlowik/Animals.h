#pragma once
#include <iostream>

using namespace std;

class Animals
{
private:
	int id;
	string Name;
	string Space;		
	int LimbCount;
	bool Wings;
	string FoodType;	
	float DialyFood;
	static int SumInstanc;			//static pro pocet objektu

public:
	Animals(int id, string Name, string space, int limbC, bool wings, string food, float dailyFood);
	~Animals();
	int getIdAnimal();
	string getName();
	string getSpace();
	int getLimbCount();
	bool getWings();
	string GetFoodType();
	float getDialyFood();
	static int GetObjCount();
	bool AbleToExist();


};