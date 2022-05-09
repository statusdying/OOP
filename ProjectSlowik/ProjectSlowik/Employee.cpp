#include "Employee.h"
#include "Person.h"
#include "Visitor.h"
#include "Rooms.h"

Employee::Employee(int id, string name, int age, int money, int discount, int privLvl, string area, Rooms* room) : Visitor(id, name, age, money, discount)
{		//vicenasobna dedicnost
	this->PrivLvl = privLvl;
	this->Area = area;
	this->room00 = room;
}

Employee::~Employee()
{
	cout << "desktruktor" << endl;
}

Rooms* Employee::getRoom(int idr)
{
	return 0;
}

int Employee::getPrivLvl()
{
	return this->PrivLvl;
}

string Employee::getArea()
{
	return this->Area;
}

void Employee::SpendMoney(int cost)				//prekryti
{
	
	if ((this->Money - (cost/2)) < 0)
	{
		cout << "Not Enough Money" << endl;
		
	}
	else {
		this->Money - (cost / 2);
	}
}



void Employee::RefillFood(float food)
{
	this->room00->setFoodCount(this->room00->getFoodCount()+food);
}
