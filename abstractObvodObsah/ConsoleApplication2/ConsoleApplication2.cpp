#include <iostream>
#include "ObvodObsah.h"

int main(void) {
	Rectangle Rect;
	Triangle  Tri;

	Rect.setWidth(5);
	Rect.setHeight(7);

	// Volaní funkce rectangle area
	cout << "Obsah Obdelniku: " << Rect.getArea() << endl;
	cout << "Obvod Obdelniku: " << Rect.getPerimeter() << endl;

	Tri.setWidth(5);
	Tri.setHeight(7);

	// Volaní funkce Triagle area
	cout << "Obsah Trojuhelniku : " << Tri.getArea() << endl;
	cout << "Obvod Trojuhelniku : " << Tri.getPerimeter() << endl;

	return 0;
}
