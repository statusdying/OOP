#pragma once
#include <iostream>
using namespace std;

class PolozkaF {
private:
	double price;
	string name;
public:
	PolozkaF(double price, string name);
	double GetPrice();
	string GetName();
};


class person
{
private:
	string adress;
	string name;

public:
	person(string name, string adress);
	string GetAdress();
	string GetName();
};




class Faktura {
private:
	int Fnumber;
	person* entit;
	PolozkaF** things;

	int count;
	int sum = 0;
public:
	Faktura(int Fnumber, string name, string adress, int count);
	~Faktura();
	PolozkaF* Addthing(double price, string name);
	double GetSum();

};
