#include <iostream>
using namespace std;
#include <math.h>
#include "ObvodObsah.h"


	obdelnik::obdelnik(float l, float h)
	{
		this->length = l;
		this->height = h;
	}
	float obdelnik::getLength()
	{
		return this->length;
	}
	float obdelnik::getHeight()
	{
		return this->height;
	}

	float obdelnik::getPerimeter()
	{

		return(2 * length + 2 * height);
	}
	float obdelnik::getArea()
	{
		return(length * height);
	}


	RovnoStranTrojuhelnik::RovnoStranTrojuhelnik(float l) : obdelnik(l, l)
	{
		this->length = l;
	}
	
	float RovnoStranTrojuhelnik::getLength()
	{
		return this->length;
	}

	float RovnoStranTrojuhelnik::getPerimeter()
	{
		return(length * 3);
	}

	float RovnoStranTrojuhelnik::getArea()
	{
		return((length * 1.732) / 2);
	}





	Ctverec::Ctverec(float l) : obdelnik(l, l)
	{
		this->length = l;
	}
	
	float Ctverec::getLength()
	{
		return this->length;
	}
	
	float Ctverec::getPerimeter()
	{
		return(4 * length);
	}

	float Ctverec::getArea()
	{
		return(length * length);
	}
	
	

