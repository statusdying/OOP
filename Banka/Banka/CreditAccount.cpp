#include "CreditAccount.h"

CreditAccount::CreditAccount(int n, Client* c, double cred) : Account(n, c)
{
	this->credit = cred;
}

CreditAccount::CreditAccount(int n, Client* c, double ir, double cred) : Account(n, c, ir)
{
	this->credit = cred;
}

bool CreditAccount::CanWithdraw(double a)
{
	return (this->GetBalance() + this->credit >= 0);
}

bool CreditAccount::Withdraw(double a)
{
	bool success = false;
	if (this->Withdraw(a))
	{
		this->balance -= a;
		success = true;
	}
	return success;

}
