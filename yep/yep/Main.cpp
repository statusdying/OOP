#include <iostream>
#include "KeyValue.h"
#include "KeyValues.h"
using namespace std;

int main() {
	//KeyValue* keyval = new KeyValue(8, 45.55);
	
	//cout << keyval->GetKey() << "\n";

	int pocet;
	cout << "Zadek pocet: ";
	cin >> pocet;

	KeyValues* myKeyValues = new KeyValues(pocet);
	KeyValue* myKeyValue = myKeyValues->CreateObject(0, 1);
	cout << myKeyValue->GetValue() << endl;

	for (int i = 0; i < pocet; i++)
	{
		myKeyValues->CreateObject(i, i++);
		cout << myKeyValues->SearchObject(i)->GetValue() << endl;
	}

	delete myKeyValues;
	return 0;

	
}