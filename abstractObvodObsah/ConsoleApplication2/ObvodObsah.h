#pragma once

#include <iostream>
using namespace std;
#include <math.h>


class Parametry {
protected:
	float length, width;
public:
	virtual int getArea() = 0;
	void setWidth(int w);
	void setHeight(int l);
};

class Rectangle : public Parametry { 
public:
	int getArea();
	int getPerimeter();
};


class Triangle : public Parametry {	 
public:
	int getArea();
	float getPerimeter();
};

