#include <iostream>
#include "BTree.h"
using namespace std;

BTree::BTree(string k, string v) {
    this->key = k;
    this->value = v;
    this->nextBranch = nullptr;
    this->nextTree = nullptr;
}

BTree::~BTree() {
    if (this->nextTree != nullptr) {
        delete this->nextTree;
        this->nextTree = nullptr;
    }

    if (this->nextBranch != nullptr) {
        delete this->nextBranch;
        this->nextBranch = nullptr;
    }
}

string BTree::getKey() {
    return this->key;
}

string BTree::getValue() {
    return this->value;
}

BTree* BTree::getNextBranch() {
    return this->nextBranch;
}

BTree* BTree::getNextTree() {
    return this->nextTree;
}

BTree* BTree::createNextBranch(string k, string v) {
    this->nextBranch = new BTree(k, v);
    return this->nextBranch;
}

BTree* BTree::createNextTree(string k, string v) {
    this->nextTree = new BTree(k, v);
    return this->nextTree;
}

ostream& operator << (ostream& out, BTree* x) {
    //cout << "  - " << x->getKey() << endl;
    cout << x->getKey() << endl;
    return out;
}

