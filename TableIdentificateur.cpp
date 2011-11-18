#include "TableIdentificateur.hpp"

#include <iostream>

using namespace std;

TableIdentificateur::TableIdentificateur() {}

TableIdentificateur::~TableIdentificateur() {}

int TableIdentificateur::getNumero(string identificateur) {
	map<string, int>::iterator it;
	it = table.find(identificateur);
	if (it == table.end()) {
		return -1;
	}
	return it->second;
}

string TableIdentificateur::getIdentificateur(int numero) {
	map<string, int>::iterator it;
	for (it = table.begin() ; it != table.end() ; it++) {
		if (it->second == numero) return it->first;
	}
	return NULL;
} 

int TableIdentificateur::inserer(string identificateur) {
	int numero = getNumero(identificateur);
	if (numero>=0) return numero;
	numero = table.size();
	table.insert(Ident_Pair(identificateur, numero));
	return numero;
}

void TableIdentificateur::afficher() {
	map<string, int>::iterator it;
	for (it = table.begin() ; it != table.end( ) ; it++) {
		cout << it->first << "=>" << it->second << "\n";
	}
}

