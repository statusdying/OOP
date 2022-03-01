#include "Faktura.h"

//pøiøadí hodnoty price a name pro objekt tøídy PolozkaF
PolozkaF::PolozkaF(double price, string name)
{
	this->price = price;
	this->name = name;
}

//funkce vracející hodnotu price
double PolozkaF::GetPrice()
{
	return this->price;
}
//funkce vracející hodnotu name
string PolozkaF::GetName()
{
	return this->name;
}
//pøiøadí hodnotu name a adress pro objekt tøídy Person
person::person(string name, string adress)
{
	this->name = name;
	this->adress = adress;
}
//funkce vracející hodnotu adress
string person::GetAdress()
{
	return this->adress;
}
//funkce vracející hodnotu name
string person::GetName()
{
	return this->name;
}
//pøiøazení hodnot do objektu tøídy Faktura
Faktura::Faktura(int Fnumber, string name, string adress, int count)
{
	this->Fnumber = Fnumber;
	this->entit = new person(name, adress);
	this->things = new PolozkaF * [count];
	this->count = 0;
}
//Funkce která pøidá novou položku do faktury
PolozkaF* Faktura::Addthing(double price, string name)
{
	PolozkaF* newThing = new PolozkaF(price, name);
	this->things[this->count] = newThing;
	this->count += 1;
	return newThing;
}
//Destruktor pro Fakturu
Faktura::~Faktura()
{
	for (int i = 0; i < this->count; i++)
	{
		delete this->things[i];
	}
	delete[] this->things;
}
//Funkce vracející celkovou sumu za položky ve faktuøe
double Faktura::GetSum()
{

	for (int i = 0; i < this->count; i++)
	{
		sum += this->things[i]->GetPrice();
	}

	return sum;
}