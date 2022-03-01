#include "KeyValues.h"

KeyValues::KeyValues(int pocet)
{
	this->keyValues = new KeyValue * [pocet];
	this->count = 0;
}

KeyValues::~KeyValues()
{
	for (int i = 0; i < this->count; i++)
	{
		delete this->keyValues[i];
	}

	delete[] this->keyValues;


}

KeyValue* KeyValues::CreateObject(int k, double v)
{	
	KeyValue* newObject = new KeyValue(k, v);

	this->keyValues[this->count] = newObject;
	this->count += 1;

	return newObject;
}

KeyValue* KeyValues::SearchObject(int key)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->keyValues[i]->GetKey() == key)
		{
			return this->keyValues[i];
		}
	}
	return nullptr;
}

int KeyValues::Count()
{
	return this->count;
}

KeyValue* KeyValues::RemoveObject(int k)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->keyValues[i]->GetKey() == k)
		{
			KeyValue* back = keyValues[i];
			this->count--;
			keyValues[i] = keyValues[count];
			keyValues[count] = nullptr;
			return back;
		}

	}
	return nullptr;

}

