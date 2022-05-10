#include "Person.h"
Person::Person(int id, string name, int age)
{
	this->Id = id;
	this->Name = name;
	this->Age = age;
}

Person::~Person()
{
	cout << "desktruktor" << endl;
}

int Person::getId()
{
	return this->Id;
}

string Person::getName()
{
	return this->Name;
}

int Person::getAge()
{
	return this->Age;
}

void Person::SpendMoney()
{
	
}
