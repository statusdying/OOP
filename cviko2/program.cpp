#include "Test.h"
#include "Kostka.h"
#include "Soubor.h"
#include "Obdelnik.h"
#include "Figurka.h"
#include "KeyValue.h"

using namespace std;

void testDestruktoru()
{
}

int main()
{
	/*
	Test* t = new Test(10);				//new == malloc v C, delete == free v C
	t->Show();
	cout << "Moje hodnota: " << t->hodnota << endl;
	delete t;

	testDestruktoru();
	*/
	/*
	Obdelnik* o = new Obdelnik(10, 10);
	o->Obsah();
	o->Show();
	o->IsSquare();
	delete o;
	*/

	/*
	Soubor* s = new Soubor("ahoj.png", 10);
	s->Show();
	delete s;
	*/
	/*
	Kostka* k = new Kostka(6);
	for (int i = 0; i < 10; i++)
	{
		k->Hod();
	}
	delete k;
	*/
	/*
	Soubor* s = new Soubor("ahoj.png", 10);
	s->Show();
	s->Rename("joha.jpg");
	s->IsImage();
	delete s;
	*/

	/*
	Figurka* f = new Figurka();
	f->Posun();
	*/

	KeyValue* kv = new KeyValue(1, 1.5);
	kv->CreateALot(1000);

	return 0;
}