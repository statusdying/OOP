#pragma once

#include <iostream>

using namespace std;

class Obdelnik
{
private:
	int sirka;
	int vyska;

public:
	Obdelnik(int sirka, int vyska);
	~Obdelnik();

	void Obsah();
	void Show();
	bool IsSquare();
};