#pragma once
#include <iostream>
#include "Animals.h"
#include <vector>

using namespace std;
class Rooms
{
private:
	string TypeOfRoom;
	int SpaceOfRoom;
	int DayCount;
	int idR;
	vector<Animals*> animalV;

protected:
	float FoodCount;


public:
	Rooms(int idR, string typeofroom, int spaceofroom, float foodcount);
	string getTypeOfRoom();
	int	getSpaceOfRoom();
	float getFoodCount();
	int getIDR();
	void AddAnimal(Animals* animal);
	void DelAnimals(int index);
	
	void Days(int DayCount);
	void EnoughFood();
	bool EnoughSpace();
	void setFoodCount( float count);
};