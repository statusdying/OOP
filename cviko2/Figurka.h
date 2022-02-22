#pragma once

#include <iostream>

using namespace std;

class Figurka
{
private:
	unsigned int pozice;

public:
	Figurka();
	~Figurka();

	void Posun();
};