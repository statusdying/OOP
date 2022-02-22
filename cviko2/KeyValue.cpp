#include "KeyValue.h"

KeyValue::KeyValue(int k, double v)
{
	this->key = k;
	this->value = v;
	this->next = nullptr;
}

KeyValue::~KeyValue()
{
	if (this->next != nullptr)
	{
		delete this->next;
		this->next = nullptr;
	}
}

KeyValue* KeyValue::GetNext()
{
	return this->next;
}

KeyValue* KeyValue::CreateNext(int k, double v)
{
	this->next = new KeyValue(k, v);
	return this->next;
}

int KeyValue::GetKey()
{
	return this->key;
}

double KeyValue::GetValue()
{
	return this->value;
}

void KeyValue::CreateALot(int howmany)
{
	KeyValue* first = new KeyValue(1, 1.5);
	KeyValue* temp = first;

	for (int i = 2; i < howmany; i++)
	{
		temp = temp->CreateNext(i, i * 2.5);
	}

	temp = first;

	while (temp != nullptr)
	{
		cout << "Key: " << temp->GetKey() << " - " << temp->GetValue() << endl;
		temp = temp->GetNext();
	}
}