#include "Account.h"
#include <iostream>
using namespace std;
int Account::SumObj = 0;
double Account::PlusRate = 1.2;

int Account::GetObjCount()
{
	return Account::SumObj;
}

double Account::GetPlusRate()
{
	return Account::PlusRate;
}

Account::Account(int n, Client* c)
{
	this->number = n;
	this->owner = c;
	this->balance = 0;
	this->interestRate = Account::GetPlusRate();
	Account::SumObj += 1;
}

Account::Account(int n, Client* c, double ir)
{
	this->number = n;
	this->owner = c;
	this->balance = 0;
	this->partner = NULL;
	this->interestRate = ir;
	Account::SumObj += 1;
}

Account::Account(int n, Client* c, Client* p)
{
	this->number = n;
	this->owner = c;
	this->balance = 0;
	this->partner = p;
	this->interestRate = Account::GetPlusRate();
	Account::SumObj += 1;
}

Account::Account(int n, Client* c, Client* p, double ir)
{
	this->number = n;
	this->owner = c;
	this->balance = 0;
	this->partner = p;
	this->interestRate = ir;
	Account::SumObj += 1;
}

int Account::GetNumber()
{
	return this->number;
}

double Account::GetBalance()
{
	return this->balance;
}

double Account::GetInterestRate()
{
	return this->interestRate;
}

Client* Account::GetOwner()
{
	return this->owner;
}

Client* Account::GetPartner()
{
	return this->partner;
}

bool Account::CanWithdraw(double a)
{
	if (this->balance >= a) {
		return 1;
	}
	else
	{
		return 0;
	}
}

void Account::Deposit(double a)
{
	this->balance += a;
}

bool Account::Withdraw(double a)
{
	if (this->CanWithdraw(a) == 1) 
	{
		this->balance -= a;
		return 1;
	}
	else {
		return 1;
	}
}

void Account::AddInterest()
{

	if (this->interestRate == 0) {
		this->balance = this->balance * 1;
	}

	else {
		this->balance = this->balance * this->interestRate;
	}
}

