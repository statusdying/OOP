#pragma once
#include <iostream>
using namespace std;

class AbstractSpendMoney				//ryze abstractni trida
{
private:

public:
	AbstractSpendMoney();
	virtual ~AbstractSpendMoney();
	virtual void SpendMoney(int cost) = 0;

};