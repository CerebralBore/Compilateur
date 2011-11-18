#ifndef SYMBOLE_H
#define SYMBOLE_H

#include <string>
#include <iostream>
//#include "TableSymbole.hpp"

using namespace std;

class Symbole {
protected:
	//TableSymbole tableSymbole;
	int id;

public:
	Symbole();
	Symbole(int);
	virtual ~Symbole();
	
	int getId();
	//void setTableSymbole(TableSymbole ts);
	virtual void afficher();
};

#endif
