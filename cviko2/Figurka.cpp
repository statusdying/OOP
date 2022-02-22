#include "Figurka.h"

Figurka::Figurka()
{
	this->pozice = rand() % 100;
	cout << pozice << endl;
}

Figurka::~Figurka()
{

}

void Figurka::Posun()
{
	int posun;

	for (int i = 0; i < 100; i++)
	{
		cout << "Zadejte posun" << endl;
		cin >> posun;

		this->pozice = this->pozice + posun;

		if (this->pozice >= 100)
		{
			cout << "Dosahnuto preddefinovane pozice" << endl;
			exit;
		}
	}
}