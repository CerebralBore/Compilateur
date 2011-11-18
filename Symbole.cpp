#include "TableSymbole.hpp"

#include <iostream>

using namespace std;

Symbole::Symbole() {}

Symbole::Symbole(int id) {
		this->id = id;
}

Symbole::~Symbole() {}

int Symbole::getId() {
		return id;
}

void Symbole::afficher() {
	cout << id;
}



