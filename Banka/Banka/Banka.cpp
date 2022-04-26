// Banka.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
#include "Client.h"
#include "Bank.h"
#include "Account.h"
#include <iostream>

using namespace std;

int main()
{
	Bank* WholeBank = new Bank(3, 3);
	

	WholeBank->CreateClient(1, "Adam");
	Client* Acli = WholeBank->GetClient(1);
	Account* Aacc = WholeBank->CreateAccount(1, Acli, 1.12);
	Aacc->Deposit(65000);

	WholeBank->CreateClient(2, "Jan");
	Client* Bcli = WholeBank->GetClient(2);
	Account* Bacc = WholeBank->CreateAccount(2, Bcli);
	Bacc->Deposit(1000);

	WholeBank->CreateClient(3, "Josef");
	Client* Ccli = WholeBank->GetClient(3);
	Account* Cacc = WholeBank->CreateAccount(3, Ccli, 1.35);
	Cacc->Deposit(36000);



	/*Výpis klientù*/

		cout << "-----------------LIDI--------------"<< endl;
		for (int i = 1; i < 4; i++)
		{
			cout << WholeBank->GetClient(i)->GetName();
			cout << "\t\t";
			cout << WholeBank->GetAccount(i)->GetInterestRate();
			cout << "\t\t";
			cout << WholeBank->GetAccount(i)->GetBalance() << endl;
		}
	cout << endl;
	/*VÝBÌRY*/
	{
		cout << endl << "-----------------VYBERY-------------" << endl;

		//Výbìr penìz 1. klienta
		Aacc->Withdraw(10000);
		cout << WholeBank->GetClient(1)->GetName();
		cout << "\t\t";
		cout << "10000";
		cout << "\t\t";
		cout << WholeBank->GetAccount(1)->GetBalance() << endl;

		//Výbìr penìz 3. klienta !!NEJDE!!
		Cacc->Withdraw(40000);
		cout << WholeBank->GetClient(3)->GetName();
		cout << "\t\t";
		cout << "40000";
		cout << "\t\t";
		cout << WholeBank->GetAccount(3)->GetBalance() << endl << endl;
	}
	/*VKLADY*/
	{
		cout << endl << "-----------------VKLADY-------------" << endl;
		//Vklad penìz 2. klienta
		Bacc->Deposit(25000);
		cout << WholeBank->GetClient(2)->GetName();
		cout << "\t\t";
		cout << "25000";
		cout << "\t\t";
		cout << WholeBank->GetAccount(2)->GetBalance() << endl;
	}

	WholeBank->AddInterest();
	cout << endl << "-----------------UROK----------------" << endl;
	for (int i = 1; i < 4; i++)
	{
		cout << WholeBank->GetClient(i)->GetName();
		cout << "\t\t\t\t";
		cout << WholeBank->GetAccount(i)->GetBalance() << endl;
	}
	

	cout << "-------------POCET OBJEKTU------------" << endl;
	cout << Aacc->GetObjCount() << endl;			



	return 0;
}





