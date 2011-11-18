#ifndef SYMBOLE_Constante_H
#define SYMBOLE_Constante_H

#include "Symbole.hpp"
#include "Type.hpp"
#include "TypeEntier.hpp"
#include <iostream>

using namespace std;

class SymboleConstante : public Symbole {
protected:
	Type* type;
public:
	SymboleConstante(int, string);
	void afficher();
};

#endif
