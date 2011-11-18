#ifndef SYMBOLE_PROGRAMME_H
#define SYMBOLE_PROGRAMME_H

#include "Symbole.hpp"
#include <iostream>

using namespace std;

class SymboleProgramme : public Symbole {

public:
	SymboleProgramme(int);
	virtual ~SymboleProgramme();
	virtual void afficher();
};

#endif
