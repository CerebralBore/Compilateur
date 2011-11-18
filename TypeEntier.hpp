#ifndef TYPE_ENTIER_H
#define TYPE_ENTIER_H

#include "Type.hpp"
#include <iostream>

using namespace std;

class TypeEntier : public Type {

public:
	TypeEntier();
	virtual ~TypeEntier();
	virtual void afficher();
};

#endif
