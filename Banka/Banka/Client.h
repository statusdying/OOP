#include <iostream>
#pragma once

using namespace std;
class Client
{
private:
    int code;
    string name;
public:
    Client(int c, string n);
    int GetCode();
    string GetName();
};
