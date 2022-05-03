#include <iostream>
#include "Client.h"
#include "AbstractAccount.h"
#pragma once

class Account : public AbstractAccount

{
private:
    static int SumObj;
    static double PlusRate;
    int number;
//    double balance;
    double interestRate;
//    Client* owner;
//    Client* partner;

protected: 
    double balance;

    Client* owner;
    Client* partner;
    

public:

    static int GetObjCount();
    static double GetPlusRate();

    Account(int n, Client* c);
    Account(int n, Client* c, double ir);
    //Account(int n, Client* c, Client* p);
    //Account(int n, Client* c, Client* p, double ir);
    int GetNumber();
    double GetBalance();
    double GetInterestRate();
    Client* GetOwner();
    Client* GetPartner();
    //virtual bool CanWithdraw(double a);
    bool CanWithdraw(double a);
    void Deposit(double a);
    bool Withdraw(double a);
    void AddInterest();
};