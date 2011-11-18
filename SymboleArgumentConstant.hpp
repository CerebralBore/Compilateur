#ifndef SYMBOLE_ARGUMENT_CONSTANT_H
#define SYMBOLE_ARGUMENT_CONSTANT_H

#include "SymboleArgument.hpp"
#include <iostream>
#include <string>

using namespace std;

class SymboleArgumentConstant : public SymboleArgument {

public:
	SymboleArgumentConstant(int, string);
	virtual ~SymboleArgumentConstant();
	virtual void afficher();
};

#endif
