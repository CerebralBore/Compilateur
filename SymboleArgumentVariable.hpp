#ifndef SYMBOLE_ARGUMENT_VARIABLE_H
#define SYMBOLE_ARGUMENT_VARIABLE_H

#include "SymboleArgument.hpp"
#include <iostream>
#include <string>

using namespace std;

class SymboleArgumentVariable : public SymboleArgument {

public:
	SymboleArgumentVariable(int, string);
	virtual ~SymboleArgumentVariable();
	virtual void afficher();
};

#endif

