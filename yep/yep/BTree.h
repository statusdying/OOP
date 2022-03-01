#pragma once
#include<iostream>
using namespace std;

class BTree {
private:
    string key;
    string value;
    BTree* nextBranch;
    BTree* nextTree;

public:
    BTree(string k, string v);
    ~BTree();
    string getKey();
    string getValue();
    BTree* getNextBranch();
    BTree* getNextTree();
    BTree* createNextBranch(string k, string v);
    BTree* createNextTree(string k, string v);
    friend ostream& operator << (ostream& out, BTree* x);
};