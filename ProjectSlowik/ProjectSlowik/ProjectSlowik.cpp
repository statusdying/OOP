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
    Visitor* Visitor1 = new Visitor(3, "Pepa", 25, 500, 0);
    Animals* Lev = new Animals(1, "Lev", "traviny", 4, 0, "maso", 3);
    Animals* Tygr = new Animals(2, "Tygr", "traviny", 4, 0, "maso", 1);
    
    cout << "Before buying lunch." << endl;
    cout << "ID   " << "Name   " << " Age   " <<  "Money " <<"Discount " << endl;
    cout << Visitor1->getId() << "    " << Visitor1->getName() << "    " << Visitor1->getAge() << "    " << Visitor1->getMoney() << "    " << Visitor1->getDiscount() << endl;
    Visitor1->SpendMoney(200);
    cout << "After buying lunch." << endl;
    cout << "ID   " << "Name   " << " Age   " << "Money " << "Discount " << endl;
    cout << Visitor1->getId() << "    " << Visitor1->getName() << "    " << Visitor1->getAge() << "    "<< Visitor1->getMoney() << "    "<< Visitor1->getDiscount() << endl;
    cout << endl;
    
   
    cout << Room1->getTypeOfRoom() << "    " << Room1->getSpaceOfRoom() << "    " << Room1->getFoodCount() << "    " << endl;
    cout << Lev->getIdAnimal() << "    " << Lev->getName() << "    " << Lev->getSpace() << "    " << Lev->getLimbCount() << "    " << Lev->getWings() << "    " << Lev->GetFoodType() << "     " << Lev->getDialyFood() << endl;
    Room1->Days(2);
    Room1->AddAnimal(Lev);
    Room1->EnoughFood();
    Room1->AddAnimal(Tygr);
    Room1->EnoughFood();
    Adam->RefillFood(200);   

    Room1->DelAnimals(0);
    
    cout << Room1->getTypeOfRoom() << "    " << Room1->getSpaceOfRoom() << "    " << Room1->getFoodCount() << "    " << endl;
    cout << Room1->getTypeOfRoom() << "    " << Room1->getSpaceOfRoom() << "    " << Room1->getFoodCount() << "    " << endl;


    cout << "SUM OF OBJECTS (ANIMALS):  " << Lev->GetObjCount() << endl;
}

