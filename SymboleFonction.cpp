#include "SymboleFonction.hpp"

#include <iostream>

using namespace std;

SymboleFonction::SymboleFonction(int id, int arite, TableSymbole* ts): Symbole(id), arite(arite), tsFonction(ts) {}

SymboleFonction::~SymboleFonction() {}

TableSymbole* SymboleFonction::getTSFonction() {
		return tsFonction;
}

int SymboleFonction::getArite() {
		return arite;
}

void SymboleFonction::afficher() {
	cout << id << ":fonction arite:" << arite << " tsFonction_id:" << tsFonction->getId();
}
