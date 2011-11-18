#ifndef SYMBOLE_ARGUMENT_H
#define SYMBOLE_ARGUMENT_H

#include "Symbole.hpp"
#include "Type.hpp"
#include "TypeEntier.hpp"
#include <iostream>

using namespace std;

class SymboleArgument : public Symbole {
protected:
	int position;
	Type* type;
public:
	SymboleArgument(int, string);
	virtual ~SymboleArgument();
	int getPosition();
	void setPosition(int);
	virtual void afficher();
};

#endif
