#include "Kostka.h"

Kostka::Kostka(int pocetSten)
{
	this->pocetSten = pocetSten;
}

Kostka::~Kostka()
{
	cout << "Destruktor" << endl;
}

void Kostka::Hod()
{
	int random;
	random = rand() % this->pocetSten+1;
	cout << random << endl;
}