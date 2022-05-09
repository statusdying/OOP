#pragma once
#include <iostream>
#include "Person.h"
#include "Visitor.h"
#include "Rooms.h"
using namespace std;

class Employee : public Visitor
{
protected:
	static int Discount;
	int PrivLvl;
	string Area;
	Rooms* room00;

public:
	Employee(int id, string name, int age, int money, int discount, int privLvl, string area, Rooms* room);
	~Employee();
	Rooms* getRoom(int idr);
	int getPrivLvl();
	string getArea();

	virtual void SpendMoney(int cost);
	void RefillFood(float food);
};
