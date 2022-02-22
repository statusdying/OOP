#pragma once

#include <iostream>		//direktiva

using namespace std;

class Test
{
private:
	

public:							// v public se pise konstruktor i desktruktor
	Test(int hodnota);
	~Test();					//pred destruktor se pise ~

	int hodnota;
	
	//konstruktor inicializuje objekt
	
	void Show();
};