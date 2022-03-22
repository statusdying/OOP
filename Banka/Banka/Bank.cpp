#include <iostream>
#include "Bank.h"

using namespace std;


Bank::Bank(int c, int a)
{
    this->clients = new Client * [c];
    this->clientsCount = 0;

    this->accounts = new Account * [a];
    this->accountsCount = 0;

}

Bank::~Bank()
{
    for (int i = 0; i < this->clientsCount; i++)
    {
        delete this->clients[i];
    }
    for (int i = 0; i < this->accountsCount; i++)
    {
        delete this->accounts[i];
    }

    delete[] this->accounts;
    delete[] this->clients;
}

Client* Bank::GetClient(int c)
{
    for (int i = 0; i < this->clientsCount; i++)
    {
        if (this->clients[i]->GetCode() == c)
        {
            return this->clients[i];
        }
    }
    return nullptr;
}

Account* Bank::GetAccount(int n)
{
    for (int i = 0; i < this->accountsCount; i++)
    {
        if (this->accounts[i]->GetNumber() == n)
        {
            return this->accounts[i];
        }
    }
    return nullptr;
}

Client* Bank::CreateClient(int c, string n)
{
    Client* newC = new Client(c, n);
    this->clients[this->clientsCount] = newC;
    this->clientsCount++;
    return newC;
}

Account* Bank::CreateAccount(int n, Client* c)
{
    Account* newA = new Account(n, c);
    this->accounts[this->accountsCount] = newA;
    this->accountsCount++;
    return newA;
}

Account* Bank::CreateAccount(int n, Client* c, double ir)
{
    Account* newA = new Account(n, c, ir);
    this->accounts[this->accountsCount] = newA;
    this->accountsCount++;
    return newA;
}

Account* Bank::CreateAccount(int n, Client* c, Client* p)
{
    Account* newA = new Account(n, c, p);
    this->accounts[this->accountsCount] = newA;
    this->accountsCount++;
    return newA;
}

Account* Bank::CreateAccount(int n, Client* c, Client* p, double ir)
{
    Account* newA = new Account(n, c, p, ir);
    this->accounts[this->accountsCount] = newA;
    this->accountsCount++;
    return newA;
}

void Bank::AddInterest()
{
    for (int i = 0; i < this->accountsCount; i++)
    {
        this->accounts[i]->AddInterest();
    }
}
