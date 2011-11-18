#ifndef SYMBOLE_FONCTION_H
#define SYMBOLE_FONCTION_H

#include "Symbole.hpp"
#include "TableSymbole.hpp"
#include <iostream>

using namespace std;

class SymboleFonction : public Symbole {
private:
TableSymbole* tsFonction;
int arite;

public:
	SymboleFonction(int, int, TableSymbole*);
	virtual ~SymboleFonction();
	TableSymbole* getTSFonction();
	int getArite();
	virtual void afficher();
};

#endif
