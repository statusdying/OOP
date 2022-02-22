#pragma once
#include "KeyValue.h"
class KeyValues
{
private:
	KeyValue** keyValues;
	int count;

public:
	KeyValues(int pocet);
	~KeyValues();
	KeyValue* CreateObject(int k, double v);
	KeyValue* SearchObject(int key);
	int Count();

};

