#include "SymboleArgument.hpp"
#include <iostream>
#include <string>

using namespace std;

SymboleArgument::SymboleArgument(int id, string type): Symbole(id) {
		if (type=="integer") {
			this->type = new TypeEntier();
		} else {
			this->type = new Type();
		}
}

SymboleArgument::~SymboleArgument() {}

int SymboleArgument::getPosition() {
	return position;
}

void SymboleArgument::setPosition(int position) {
	this->position = position;
}

void SymboleArgument::afficher() {
	cout << id << ":argument ";
}

