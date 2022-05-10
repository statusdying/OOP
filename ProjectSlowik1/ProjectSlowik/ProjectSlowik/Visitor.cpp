#include "Visitor.h"
Visitor::Visitor(int id, string name, int age, int money, int discount) : Person(id, name, age)
{	//dedicna struktura
	this->Money = money;
	this->Discount = discount;
	this->Kids = 0;
}

Visitor::Visitor(int id, string name, int age, int money, int discount, int kids) : Person(id, name, age)
{
	this->Money = money;
	this->Discount = discount;
	this->Kids = kids;
}

Visitor::~Visitor()
{
	cout << "desktruktor" << endl;
}


int Visitor::getMoney()
{
	return this->Money;
}

int Visitor::getDiscount()
{
	return this->Discount;
}

void Visitor::SpendMoney(int cost)
{
	if ((this->Money - cost) > 0)
	{
		this->Money = (this->Money - cost);
	}
	else 
	{
		cout << "~~Not Enough Money~~" << endl << endl;
	}

	
}
