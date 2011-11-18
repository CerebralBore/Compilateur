#include "SymboleVariable.hpp"
#include <iostream>
#include <string>

using namespace std;

SymboleVariable::SymboleVariable(int id, string type): Symbole(id) {
		if (type=="integer") {
			this->type = new TypeEntier();
		} else {
			this->type = new Type();
		}
}

void SymboleVariable::afficher() {
	cout << id << ":variable ";
}
