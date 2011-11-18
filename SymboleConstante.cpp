#include "SymboleConstante.hpp"
#include <iostream>
#include <string>

using namespace std;

SymboleConstante::SymboleConstante(int id, string type): Symbole(id) {
		if (type=="integer") {
			this->type = new TypeEntier();
		} else {
			this->type = new Type();
		}
}

void SymboleConstante::afficher() {
	cout << id << ":constante ";
}
