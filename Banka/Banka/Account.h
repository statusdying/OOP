#include <iostream>
#include "Client.h"
#pragma once

class Account
{
private:
    static int SumObj;
    static double PlusRate;
    int number;
    double balance;
    double interestRate;
    Client* owner;
    Client* partner;
    

public:

    static int GetObjCount();
    static double GetPlusRate();

    Account(int n, Client* c);
    Account(int n, Client* c, double ir);
    Account(int n, Client* c, Client* p);
    Account(int n, Client* c, Client* p, double ir);
    int GetNumber();
    double GetBalance();
    double GetInterestRate();
    Client* GetOwner();
    Client* GetPartner();
    bool CanWithdraw(double a);
    void Deposit(double a);
    bool Withdraw(double a);
    void AddInterest();
};