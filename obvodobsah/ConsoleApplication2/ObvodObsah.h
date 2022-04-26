#pragma once

#include <iostream>
using namespace std;
#include <math.h>


class obdelnik {
protected:
	float length, height;
public:
	obdelnik(float l, float w);	
	float getLength();	
	float getHeight();	
	float getPerimeter();
	float getArea();
	
};

class RovnoStranTrojuhelnik : public obdelnik {
private:
	float length;
public:
	RovnoStranTrojuhelnik(float l);
	float getLength();
	float getPerimeter();
	float getArea();

};


class Ctverec : public obdelnik {
private:
	float length;
public:
	Ctverec(float l);
	float getLength();
	float getPerimeter();
	float getArea();


};

