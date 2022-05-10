#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class Visitor : public Person
{
protected:					//protected
	int Money;
	int Discount;
	int Kids;

public:
	Visitor(int id, string name, int age, int money, int discount);
	Visitor(int id, string name, int age, int money, int discount, int kids);
	~Visitor();
	int getMoney();
	int getDiscount();
	virtual void SpendMoney(int cost);

};