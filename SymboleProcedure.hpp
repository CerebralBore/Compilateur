#ifndef SYMBOLE_PROCEDURE_H
#define SYMBOLE_PROCEDURE_H

#include "Symbole.hpp"
#include "TableSymbole.hpp"
#include <iostream>

using namespace std;

class SymboleProcedure : public Symbole {
private:
TableSymbole* tsProcedure;
int arite;

public:
	SymboleProcedure(int, int, TableSymbole*);
	virtual ~SymboleProcedure();
	TableSymbole* getTSProcedure();
	int getArite();
	virtual void afficher();
};

#endif
