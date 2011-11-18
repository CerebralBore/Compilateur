#ifndef TABLE_IDENTIFICATEUR_H
#define TABLE_IDENTIFICATEUR_H

#include <string>
#include <iostream>

#include <map>

using namespace std;

typedef pair <string, int> Ident_Pair;

class TableIdentificateur {
private:
	map<string, int> table;

public:
	TableIdentificateur();
	~TableIdentificateur();
	
	int getNumero(string identificateur);
	string getIdentificateur(int numero);
	int inserer(string identificateur);
	void afficher();
};

#endif
