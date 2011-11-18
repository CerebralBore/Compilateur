#ifndef SYMBOLE_VARIABLE_H
#define SYMBOLE_VARIABLE_H

#include "Symbole.hpp"
#include "Type.hpp"
#include "TypeEntier.hpp"
#include <iostream>

using namespace std;

class SymboleVariable : public Symbole {
protected:
	Type* type;
public:
	SymboleVariable(int, string);
	void afficher();
};

#endif

