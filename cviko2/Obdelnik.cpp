#include "Obdelnik.h"

Obdelnik::Obdelnik(int a, int b)
{
	this->sirka = a;
	this->vyska = b;
}

Obdelnik::~Obdelnik()
{
	cout << "Desktruktor" << endl;
}

void Obdelnik::Obsah()
{
	int vysledek;
	vysledek = this->sirka * this->vyska;
	cout << "Obsah je: " << vysledek << endl;
}

void Obdelnik::Show()
{
	cout << "Sirka obdelniku je: " << this->sirka << endl;
	cout << "Vyska obdelniku je: " << this->vyska << endl;
}

bool Obdelnik::IsSquare()
{
	if (this->sirka == this->vyska)
	{
		cout << "Je ctverec" << endl;
		return true;
	}

	else
	{
		cout << "Neni ctverec" << endl;
		return false;
	}
}