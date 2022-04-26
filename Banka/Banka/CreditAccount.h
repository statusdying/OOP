#pragma once
#include "Account.h"

class CreditAccount : public Account {
private:
	double credit;
public:
	CreditAccount(int n, Client* c, double cred);
	CreditAccount(int n, Client* c, double ir, double cred);

	bool CanWithdraw(double a);
	bool Withdraw(double a);
};
