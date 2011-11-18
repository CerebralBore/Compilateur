#ifndef TABLE_SYMBOLE_H
#define TABLE_SYMBOLE_H

#include <string>
#include <iostream>
#include <map>
#include <vector>
#include "Symbole.hpp"

using namespace std;

typedef pair <int, Symbole> Symb_Pair;

class TableSymbole {
private:
	int id;
	vector<Symbole*> symboles;
	int parent;	
	
public:
	TableSymbole();
	TableSymbole(int id, int ts);
	TableSymbole(int id);

	~TableSymbole();
	
	void inserer(Symbole* s);
	int getId();
	int getParent();
	Symbole* getSymbole(int id);
	
	TableSymbole& operator=(const TableSymbole& ts);
	
	void afficher();
};

#endif
