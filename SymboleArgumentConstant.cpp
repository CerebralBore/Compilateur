#include "SymboleArgumentConstant.hpp"
#include <iostream>

using namespace std;

SymboleArgumentConstant::SymboleArgumentConstant(int id, string type): SymboleArgument(id, type) {}

SymboleArgumentConstant::~SymboleArgumentConstant() {}

void SymboleArgumentConstant::afficher() {
	cout << id << ":argumentConstant pos:" << position << " type:";
	type->afficher();
}
