#include "Rooms.h"
#include "Animals.h"
Rooms::Rooms(int idr, string typeofroom, int spaceofroom, float foodcount)
{
	this->TypeOfRoom = typeofroom;
	this->SpaceOfRoom = spaceofroom;
	this->FoodCount = foodcount;
	this->idR = idr;
}

string Rooms::getTypeOfRoom()
{
	return this->TypeOfRoom;
}

int Rooms::getSpaceOfRoom()
{
	return this->SpaceOfRoom;
}

float Rooms::getFoodCount()
{
	return this->FoodCount;
}

int Rooms::getIDR()
{
	return this->idR;
}

void Rooms::AddAnimal(Animals* animal)
{
	animalV.push_back(animal);
	this->setFoodCount(this->getFoodCount() - (animal->getDialyFood()*this->DayCount));


}

void Rooms::DelAnimals(int index)
{	
	cout << endl << "All animals:" << endl;
	for (size_t i = 0; i < animalV.size(); i++)
	{
		if (animalV[i] != nullptr)
		{
			cout << animalV[i]->getName() << endl;
		}

	}
	animalV.erase(animalV.begin() + index);
	cout << endl << "Animals -1:" << endl;
	for (size_t i = 0; i < animalV.size(); i++)
	{	
		if (animalV[i] != nullptr)
		{
			cout << animalV[i]->getName() << endl;
		}
		
	}

	
}

void Rooms::Days(int daycount)
{
	this->DayCount = daycount;
}

void Rooms::EnoughFood()
{	
	if (this->getFoodCount() <= 0)
	{
		cout << "Not Enought Food, Call Employee!" << endl;
	this->FoodCount = 0;
	}

}

bool Rooms::EnoughSpace()
{
	return true;
}

void Rooms::setFoodCount(float count)
{
	this->FoodCount = count;
}
