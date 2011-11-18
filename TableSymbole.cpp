#include "TableSymbole.hpp"

#include <iostream>

#include "SymboleProgramme.hpp"
using namespace std;

TableSymbole::TableSymbole() : parent(NULL) {}

TableSymbole::TableSymbole(int id) : id(id), parent(NULL) {}

TableSymbole::TableSymbole(int id, int ts) : id(id), parent(ts) {}

TableSymbole::~TableSymbole() {}
 

void TableSymbole::inserer(Symbole* s) {
	symboles.insert(symboles.end(), s);
}

int TableSymbole::getId() {
	return id;
}

int TableSymbole::getParent(){
	return parent;
}

Symbole* TableSymbole::getSymbole(int id){
	vector<Symbole*>::iterator it;

	Symbole* s;
	for ( it=symboles.begin() ; it<symboles.end() ; it++ ) {
		s = *it;
		if (s->getId()==id) return s;
	}

	return NULL;
}

TableSymbole& TableSymbole::operator=(const TableSymbole& ts) {
	return (*this);
}

void TableSymbole::afficher() {
	cout << "ts_num : " << id << endl;

	vector<Symbole*>::iterator it;
	for ( it=symboles.begin() ; it<symboles.end() ; it++ ) {
		cout << "__ symbole : ";
		(*it)->afficher();
		cout << endl;
	}

}


