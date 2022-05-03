#include <iostream>
using namespace std;
#include <math.h>
#include "ObvodObsah.h"

void Parametry::setWidth(int w)
{
	width = w;
}

void Parametry::setHeight(int l)
{
	length = l;

}

int Rectangle::getArea()
{
	return (width * length);
}

int Rectangle::getPerimeter()
{
	return (width + length)* 2;
}



int Triangle::getArea()
{
	return (width * length) / 2;
}

float Triangle::getPerimeter()
{
	//float c = sqrt((width * width) + (length * length));
	return (width + length + sqrt((width * width) + (length * length)));
}
