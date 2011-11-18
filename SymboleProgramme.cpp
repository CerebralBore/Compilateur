#include "SymboleProgramme.hpp"
#include <iostream>

using namespace std;

SymboleProgramme::SymboleProgramme(int id): Symbole(id) {}

SymboleProgramme::~SymboleProgramme() {}

void SymboleProgramme::afficher() {
	cout << id << ":programme";
}
