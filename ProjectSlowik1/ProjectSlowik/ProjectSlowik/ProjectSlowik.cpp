// ProjectSlowik.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#include "Employee.h"
#include "Rooms.h"
#include "Person.h"
#include "Visitor.h"
#include <iostream>

int main()
{
   
    Rooms* Room1 = new Rooms(1, "Safari", 6, 100);
    Employee* Adam = new Employee(1, "Adam", 30, 20000, 10, 1, "Patro1", Room1);
    Visitor* Visitor1 = new Visitor(3, "Pepa", 25, 500, 10);
    Animals* Lion = new Animals(1, "Lion", "traviny", 4, 0, "maso", 3);
    Animals* Tiger = new Animals(2, "Tiger", "traviny", 4, 0, "maso", 1);
    //Animals* Tygr = new Animals(2, "Tiger", "traviny", 4, 0, "maso", 1);

    cout << "Before buying lunch." << endl;
    cout << "ID   " << "Name   " << " Age   " <<  "Money  " <<"Discount " << endl;
    cout << Visitor1->getId() << "    " << Visitor1->getName() << "    " << Visitor1->getAge() << "    " << Visitor1->getMoney() << "    " << Visitor1->getDiscount() << endl << endl;
    Visitor1->SpendMoney(400);
    cout << "After buying lunch. (400)" << endl;
    cout << "ID   " << "Name   " << " Age   " << "Money  " << "Discount " << endl;
    cout << Visitor1->getId() << "    " << Visitor1->getName() << "    " << Visitor1->getAge() << "    "<< Visitor1->getMoney() << "    "<< Visitor1->getDiscount() << endl;
    cout << endl;
    
    cout << "After trying to buy another. (400)" << endl;
    Visitor1->SpendMoney(400);
    cout << "ID   " << "Name   " << " Age   " << "Money  " << "Discount " << endl;
    cout << Visitor1->getId() << "    " << Visitor1->getName() << "    " << Visitor1->getAge() << "    " << Visitor1->getMoney() << "    " << Visitor1->getDiscount() << endl;
    cout << endl;

    cout << "Room Type   " << "Room Space   " << " Food Count   " << endl;
    cout << Room1->getTypeOfRoom() << "      " << Room1->getSpaceOfRoom() << "             " << Room1->getFoodCount() << "    " << endl;


    cout <<endl<< "ID   " << "Name   " << "  Place  " << "    Limbs  " << " Wings  " << " Food  "<< "   Daily Food" << endl;
    cout << Lion->getIdAnimal() << "    " << Lion->getName() << "     " << Lion->getSpace() << "    " << Lion->getLimbCount() << "       " << Lion->getWings() << "       " << Lion->GetFoodType() << "     " << Lion->getDialyFood() << endl;
    cout << Tiger->getIdAnimal() << "    " << Tiger->getName() << "    " << Tiger->getSpace() << "    " << Tiger->getLimbCount() << "       " << Tiger->getWings() << "       " << Tiger->GetFoodType() << "     " << Tiger->getDialyFood() << endl;
    
    Room1->Days(2);
    Room1->AddAnimal(Lion);
    Room1->EnoughFood();
    Room1->AddAnimal(Tiger);
    Room1->EnoughFood();
    cout << endl << "After Two Days" << endl;
    cout << "Room Type   " << "Room Space   " << " Food Count   " << endl;
    cout << Room1->getTypeOfRoom() << "      " << (Room1->getSpaceOfRoom()-4) << "             " << Room1->getFoodCount() << "    " << endl;


    Adam->RefillFood(200);   


    cout << endl << "After Refilling 200 food" << endl;
    cout << "Room Type   " << "Room Space   " << " Food Count   " << endl;
    cout << Room1->getTypeOfRoom() << "      " << (Room1->getSpaceOfRoom()-4) << "             " << Room1->getFoodCount() << "    " << endl;
    
    cout << endl << "SUM OF OBJECTS (ANIMALS):  " << Lion->GetObjCount() << endl;
    Room1->DelAnimals(0);
    
   


}

