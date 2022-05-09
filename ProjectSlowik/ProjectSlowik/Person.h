#pragma once
#include <iostream>
#include "AbstractSpendMoney.h"
using namespace std;

class Person : public AbstractSpendMoney					//protected
{
protected:
	int Id;
	string Name;
	int Age;

public:
	Person(int id, string name, int age);
	~Person();
	int getId();
	string getName();
	int getAge();
	virtual void SpendMoney();

};