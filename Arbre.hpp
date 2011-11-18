#ifndef ARBRE_H
#define ARBRE_H

#include <string>
#include <iostream>

#include <vector>

using namespace std;


class Arbre {
private:
	Arbre* parent;
	string valeur;
	vector<Arbre*> descendants;

public:
	Arbre(Arbre*,string);
	Arbre();
	~Arbre();
	
	string getValeur ();
	Arbre* getParent();
	vector<Arbre*> getDescendants ();
	Arbre* getDescendant(int);
	void setParent(Arbre*);
	void setvaleur(string);
	void insererDescendant(Arbre*);
};

#endif
