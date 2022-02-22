#include "Soubor.h"

Soubor::Soubor(string filename, int pocet)
{
	this->jmeno = filename;
	this->velikost = pocet;
}

Soubor::~Soubor()
{
	cout << "Destruktor" << endl;
}

void Soubor::Show()
{
	cout << "Nazev souboru je: " << this->jmeno << " a jeho velikost je: " << this->velikost << endl;
}

void Soubor::Rename(string NovyNazev)
{
	this->jmeno = NovyNazev;
	cout << "Novy nazev je: " << this->jmeno << endl;
}

bool Soubor::IsImage()
{
	int NoElements = this->jmeno.length();
	string ending = this->jmeno.substr(NoElements - 4, NoElements);
	
	if (ending == ".jpg" || ending == ".png")
	{
		cout << "True" << endl;
		return true;
	}

	else
	{
		cout << "False" << endl;
		return false;
	}
}