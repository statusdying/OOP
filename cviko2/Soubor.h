#pragma once

#include <iostream>

using namespace std;

class Soubor
{
private:
	string jmeno;
	unsigned int velikost;

public:
	Soubor(string filename, int velikost);
	~Soubor();

	void Show();
	void Rename(string novyNazev);
	bool IsImage();
};