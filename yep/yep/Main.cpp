#include <iostream>
#include "KeyValue.h"
#include "KeyValues.h"
#include "BTree.h"
#include "Faktura.h"

using namespace std;

int main() {
	//KeyValue* keyval = new KeyValue(8, 45.55);
	
	//cout << keyval->GetKey() << "\n";

    int pocet, del=0;
	cout << "Zadej pocet: ";
	cin >> pocet;

	KeyValues* myKeyValues = new KeyValues(pocet);
	KeyValue* myKeyValue = myKeyValues->CreateObject(0, 0);
	
	//cout << myKeyValue->GetValue() << endl;
    cout << "hodnoty objektu pred promazanim:" << endl;
    cout << endl;
    


	for (int i = 0; i < pocet; i++)
	{	
		
		myKeyValues->CreateObject(i, i);
		cout << myKeyValues->SearchObject(i)->GetKey() << ": " ;
        cout << myKeyValues->SearchObject(i)->GetValue() << endl;
	}


    cout << "Zadej jakou hodnotu smazat: ";
    cin >> del;
    cout << endl;
    myKeyValues->RemoveObject(del)->GetValue();

    for (int i = 0; i < pocet; i++)
    {
        if (myKeyValues->SearchObject(i) != nullptr)
        {
            cout << myKeyValues->SearchObject(i)->GetKey() << ": ";
            cout << myKeyValues->SearchObject(i)->GetValue() << endl;
        }
    }
 



    BTree* snd = nullptr;
    BTree* snd_tmp = nullptr;
    BTree* snd_tmp_tree = nullptr;

    snd_tmp = snd = new BTree("zvire", "");
    snd_tmp = snd_tmp->createNextBranch("pes", "zvire");
    snd_tmp = snd_tmp->createNextBranch("kocka", "zvire");
    snd_tmp = snd_tmp->createNextBranch("mys", "zvire");
    snd_tmp = snd_tmp->createNextBranch("slepice", "zvire");
    snd_tmp = snd_tmp->createNextBranch("husa", "zvire");

    snd_tmp = snd->createNextTree("rostlina", "");
    snd_tmp = snd_tmp->createNextBranch("ruze", "rostlina");
    snd_tmp = snd_tmp->createNextBranch("javor", "rostlina");
    snd_tmp = snd_tmp->createNextBranch("briza", "rostlina");
    snd_tmp = snd_tmp->createNextBranch("tuje", "rostlina");
    snd_tmp = snd_tmp->createNextBranch("jablon", "rostlina");

    cout << endl << "Vypis: " << endl;

    snd_tmp_tree = snd;
    while (snd_tmp_tree != nullptr) 
    {
        cout << snd_tmp_tree;

        snd_tmp = snd_tmp_tree;
        while (snd_tmp->getNextBranch() != nullptr) 
        {
            snd_tmp = snd_tmp->getNextBranch();
            cout << "  " << snd_tmp;
        }

        snd_tmp_tree = snd_tmp_tree->getNextTree();
    }
	//delete myKeyValues;

    Faktura* fakt = new Faktura(1, "Anton", "Ostrava 322", 3);	//Vytvoøení nového objektu tøídy faktura obsahujícího èíslo faktury, osobu a poèet položek
    fakt->Addthing(100, "Okurky");		//pøidaní položky do faktury pomocí funkce Addthing
    fakt->Addthing(240, "Basa Piva");	//pøidaní položky do faktury pomocí funkce Addthing
    fakt->Addthing(69, "Salam");		//pøidaní položky do faktury pomocí funkce Addthing

    cout << "Sum of products: " << fakt->GetSum() << endl;

	return 0;

	
}