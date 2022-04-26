#include <iostream>
#include "ObvodObsah.h"
int main()
{
    std::cout << "Hello World!\n";
	obdelnik* obd = new obdelnik(5, 10);	
	RovnoStranTrojuhelnik* troj = new RovnoStranTrojuhelnik(10);
	Ctverec* ctv = new Ctverec(7);	

	cout << endl;
	cout << "Obdelnik" << endl;
	cout << "delka  " << obd->getLength() << endl;
	cout << "delka  " << obd->getHeight() << endl;
	cout << "obvod  " << obd->getPerimeter() << endl;
	cout << "obsah  " << obd->getArea() << endl;

	cout << endl;
	cout << "Trojuhelnik" << endl;
	cout << "delka  " << troj->getLength() << endl;
	cout << "obvod  " << troj->getPerimeter() << endl;
	cout << "obsah  " << troj->getArea() << endl;

	cout << endl;
	cout << "Ctvrevec" << endl;
	cout << "delka  " << ctv->getLength() << endl;	
	cout << "obvod  " << ctv->getPerimeter() << endl;	
	cout << "obsah  " << ctv->getArea() << endl;	


	return 0;
}

