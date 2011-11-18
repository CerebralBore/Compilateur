#include "Arbre.hpp"

#include <iostream>

using namespace std;

Arbre::Arbre(): Arbre(NULL, "") {}

Arbre::Arbre(Arbre* pere,string token): parent(pere), valeur(token), descendants(NULL) {}

Arbre::~Arbre() {}

string Arbre::getvaleur(){
	return this->valeur;
}

Arbre* Arbre::getparent(){
	return this->parent;
}

vector<Arbre*> Arbre::getDescendants(){
	return this->descendants;
}

Arbre* Arbre::getDescendant(int i){
	return this->descendants.get(i);
}

void Arbre::insererDescendant(Arbre* A){
	this->descendants.add(A);
}

void Arbre::setParent(Arbre* p){
	this->parent = p;
}

void Arbre::setValeur(string v){
	this->valeur = v;
}
