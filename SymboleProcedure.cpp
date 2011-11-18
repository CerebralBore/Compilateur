#include "SymboleProcedure.hpp"

#include <iostream>

using namespace std;

SymboleProcedure::SymboleProcedure(int id, int arite, TableSymbole* ts): Symbole(id), arite(arite), tsProcedure(ts) {}

SymboleProcedure::~SymboleProcedure() {}

TableSymbole* SymboleProcedure::getTSProcedure() {
		return tsProcedure;
}

int SymboleProcedure::getArite() {
		return arite;
}

void SymboleProcedure::afficher() {
	cout << id << ":procedure arite:" << arite << " tsFonction_id:" << tsProcedure->getId();
}

