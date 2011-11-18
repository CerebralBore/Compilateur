#include "SymboleArgumentVariable.hpp"
#include <iostream>

using namespace std;

SymboleArgumentVariable::SymboleArgumentVariable(int id, string type): SymboleArgument(id, type) {}

SymboleArgumentVariable::~SymboleArgumentVariable() {}

void SymboleArgumentVariable::afficher() {
	cout << id << ":argumentVariable pos:" << position << " type:";
	type->afficher();
}

