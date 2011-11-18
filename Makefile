CC = gcc
CPPC = g++

all : c2code3a

c2code3a : parser.o pascal.o TableIdentificateur.o TableSymbole.o Symbole.o SymboleProgramme.o SymboleArgument.o SymboleArgumentConstant.o SymboleArgumentVariable.o SymboleFonction.o SymboleProcedure.o SymboleConstante.o SymboleVariable.o Type.o TypeEntier.o Arbre.o
	${CPPC} -Wall -o $@ $^ -lfl

parser.o : parser.c parser.h
	${CPPC} -Wall -c $<
parser.c : parser.y
	bison -d -o $@ $<

pascal.o : pascal.c parser.h
	${CPPC} -Wall -c $<
pascal.c : pascal.l
	flex -o $@ $<

TableIdentificateur.o : TableIdentificateur.cpp
	${CPPC} -o $@ -c $<

TableSymbole.o : TableSymbole.cpp
	${CPPC} -o $@ -c $<

Symbole.o : Symbole.cpp
	${CPPC} -o $@ -c $<

SymboleProgramme.o : SymboleProgramme.cpp
	${CPPC} -o $@ -c $<

SymboleArgument.o : SymboleArgument.cpp
	${CPPC} -o $@ -c $<

SymboleArgumentConstant.o : SymboleArgumentConstant.cpp
	${CPPC} -o $@ -c $<

SymboleArgumentVariable.o : SymboleArgumentVariable.cpp
	${CPPC} -o $@ -c $<

SymboleFonction.o : SymboleFonction.cpp
	${CPPC} -o $@ -c $<

SymboleProcedure.o : SymboleProcedure.cpp
	${CPPC} -o $@ -c $<

SymboleConstante.o : SymboleConstante.cpp
	${CPPC} -o $@ -c $<

SymboleVariable.o : SymboleVariable.cpp
	${CPPC} -o $@ -c $<

Type.o : Type.cpp
	${CPPC} -o $@ -c $<

TypeEntier.o : TypeEntier.cpp
	${CPPC} -o $@ -c $<

Arbre.o : Arbre.cpp
	${CPPC} -o $@ -c $<


