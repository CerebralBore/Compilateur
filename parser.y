%{

#include <cstddef>
#include <string>
#include <map>
#include <vector>

#include "TableIdentificateur.hpp"
#include "TableSymbole.hpp"

#include "Symbole.hpp"
#include "SymboleProgramme.hpp"
#include "SymboleArgument.hpp"
#include "SymboleArgumentConstant.hpp"
#include "SymboleArgumentVariable.hpp"
#include "SymboleFonction.hpp"
#include "SymboleProcedure.hpp"
#include "SymboleConstante.hpp"
#include "SymboleVariable.hpp"

#include "Type.hpp"
#include "TypeEntier.hpp"

typedef pair <int, TableSymbole> TS_Pair;

extern char* yytext;
extern int yyerror ( char* );
extern int yylex ();

extern TableIdentificateur ti; // table des identificateurs

map<int, TableSymbole> ts_map; // liste qui conserve toutes les tables des symboles
int tsCourante; // id de la table des symboles du contexte courant

vector<int> symboles; // liste des id des symboles à ajouter dans la table des symboles courantes
vector<int> arguments;
int arite;
string base_type;

%}

%union{
	int id;
}

%token KW_PROGRAM
%token KW_CONST
%token KW_TYPE
%token KW_VAR
%token KW_ARRAY
%token KW_OF
%token KW_RECORD
%token KW_BEGIN
%token KW_END
%token KW_DIV
%token KW_MOD
%token KW_AND
%token KW_OR
%token KW_XOR
%token KW_NOT
%token KW_IF
%token KW_THEN
%token KW_ELSE
%token KW_WHILE
%token KW_DO
%token KW_REPEAT
%token KW_UNTIL
%token KW_FOR
%token KW_TO
%token KW_DOWNTO
%token KW_PROC
%token KW_FUNC
%token KW_NIL
%token KW_INTEGER
%token KW_REAL
%token KW_BOOLEAN
%token KW_CHAR
%token KW_STRING

%token SEP_SCOL
%token SEP_DOT
%token SEP_DOTS
%token SEP_DOTDOT
%token SEP_COMMA
%token SEP_CO
%token SEP_CF
%token SEP_PO
%token SEP_PF

%token OP_EQ
%token OP_NEQ
%token OP_LT
%token OP_LTE
%token OP_GT
%token OP_GTE
%token OP_ADD
%token OP_SUB
%token OP_MUL
%token OP_SLASH
%token OP_EXP
%token OP_PTR
%token OP_AFFECT

%token TOK_IDENT
%token TOK_INTEGER
%token TOK_REAL
%token TOK_BOOLEAN
%token TOK_STRING

%start Program

%nonassoc OP_EQ OP_NEQ OP_GT OP_LT OP_GTE OP_LTE
%left OP_ADD OP_SUB KW_OR KW_XOR
%left OP_MUL OP_SLASH KW_AND KW_DIV KW_MOD
%right KW_NOT OP_NEG OP_POS
%left OP_EXP
%nonassoc OP_PTR
%nonassoc OP_DOT
%left SEP_CO

%nonassoc KW_IFX
%nonassoc KW_ELSE

%type <id> TOK_IDENT

%%

Program				:	ProgramHeader SEP_SCOL Block SEP_DOT {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
						it->second.afficher();
						
						cout << "\n\nTable des identificateurs\n";
						ti.afficher();
					}
				;

ProgramHeader			:	KW_PROGRAM TOK_IDENT {
						//ts_program
						TableSymbole ts($2);
						Symbole* s = new SymboleProgramme($2);
						ts.inserer(s);
						ts_map.insert(TS_Pair($2, ts));
						tsCourante = $2;							
					}
				;

Block				:	BlockDeclConst BlockDeclType BlockDeclVar BlockDeclFunc BlockCode
				;

BlockDeclConst			:	KW_CONST ListDeclConst
			 	|
			 	;

ListDeclConst			:	ListDeclConst DeclConst
			 	|	DeclConst
			 	;

DeclConst			:	TOK_IDENT OP_EQ Expression SEP_SCOL
			 	;

BlockDeclType			:	KW_TYPE ListDeclType
			 	|
			 	;

ListDeclType			:	ListDeclType DeclType
			 	|	DeclType
			 	;

DeclType			:	TOK_IDENT OP_EQ Type SEP_SCOL
			 	;

BlockDeclVar			:	KW_VAR ListDeclVar
			 	|
			 	;

ListDeclVar			:	ListDeclVar DeclVar
			 	|	DeclVar
			 	;

DeclVar				:	ListIdent SEP_DOTS Type SEP_SCOL {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
						while (!symboles.empty()) {
							Symbole* s = new SymboleVariable(symboles.back(), base_type);
							it->second.inserer(s);
							symboles.pop_back();
						}
					}
			 	;

ListIdent			:	ListIdent SEP_COMMA TOK_IDENT {
						symboles.push_back($3);						
					}
			 	|	TOK_IDENT {
						symboles.push_back($1);
					}
			 	;

BlockDeclFunc			:	ListDeclFunc SEP_SCOL
			 	|
			 	;

ListDeclFunc			:	ListDeclFunc SEP_SCOL DeclFunc
			 	|	DeclFunc
			 	;

DeclFunc			:	ProcDecl
			 	|	FuncDecl
			 	;

ProcDecl			:	ProcHeader SEP_SCOL Block {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
						it->second.afficher();

						//creation du symbole correspodant à la procédure
						Symbole* s = new SymboleProcedure(it->second.getId(), arite, &(it->second));

						//on remonte au contexte parent
						tsCourante = it->second.getParent();
						it = ts_map.find(tsCourante);

						//ajout du symbole procédure dans la table des symboles courante
						it->second.inserer(s);
					}
				;

ProcHeader			:	ProcIdent
			 	|	ProcIdent FormalArgs
			 	;

ProcIdent			:	KW_PROC TOK_IDENT {
						//ts_procedure
						//ajout du symbole procedure dans la table des symboles courante
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
												
						//creation d'une nouvelle table des symboles
						//qui devient la table des symboles courante
						TableSymbole ts($2, tsCourante);
						ts_map.insert(TS_Pair($2, ts));
						tsCourante = $2;
					}
			 	;

FormalArgs			:	SEP_PO ListFormalArgs SEP_PF {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
						
						arite = arguments.size();
						int i = arite;
						while (!arguments.empty()) {
							Symbole* s = it->second.getSymbole(arguments.back());
							SymboleArgument* sa = dynamic_cast<SymboleArgument*>(s);
							if (sa!=NULL) { 
								sa->setPosition(i);
							}
							arguments.pop_back();
							i--;
						}
					}
			 	;

ListFormalArgs			:	ListFormalArgs SEP_SCOL FormalArg
			 	|	FormalArg
			 	;

FormalArg			:	ValFormalArg
			 	|	VarFormalArg
			 	;

ValFormalArg			:	ListIdent SEP_DOTS BaseType {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);					
						while (!symboles.empty()) {
							Symbole* s = new SymboleArgumentConstant(symboles.back(), base_type);
							it->second.inserer(s);
							arguments.push_back(symboles.back());
							symboles.pop_back();
						}
					}
			 	;

VarFormalArg			:	KW_VAR ListIdent SEP_DOTS BaseType {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
						while (!symboles.empty()) {
							Symbole* s = new SymboleArgumentVariable(symboles.back(), base_type);
							it->second.inserer(s);
							arguments.push_back(symboles.back());
							symboles.pop_back();
						}
					}
			 	;

FuncDecl			:	FuncHeader SEP_SCOL Block {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
						it->second.afficher();
						
						//creation du symbole correspodant à la fonction
						Symbole* s = new SymboleFonction(it->second.getId(), arite, &(it->second));

						//on remonte au contexte parent
						tsCourante = it->second.getParent();
						it = ts_map.find(tsCourante);

						//ajout du symbole fonction dans la table des symboles courante
						it->second.inserer(s);
					}
			 	;

FuncHeader			:	FuncIdent FuncResult
			 	|	FuncIdent FormalArgs FuncResult
			 	;

FuncIdent			:	KW_FUNC TOK_IDENT {
						//ts_fonction
												
						//creation d'une nouvelle table des symboles
						//qui devient la table des symboles courante
						TableSymbole ts($2, tsCourante);
						ts_map.insert(TS_Pair($2, ts));
						tsCourante = $2;
					}
			 	;

FuncResult			:	SEP_DOTS BaseType
			 	;

Type				:	UserType
			 	|	BaseType
			 	;

UserType			:	EnumType
			 	|	InterType
			 	|	ArrayType
			 	|	RecordType
			 	|	PointerType
			 	;

BaseType			:	TOK_IDENT
			 	|	KW_INTEGER {base_type = "integer"}
				|	KW_REAL {base_type = "real"}
				|	KW_BOOLEAN {base_type = "boolean"}
				|	KW_CHAR {base_type = "char"}
				|	KW_STRING {base_type = "string"}
				;

EnumType			:	SEP_PO ListEnumValue SEP_PF
			 	;

ListEnumValue			:	ListEnumValue SEP_COMMA TOK_IDENT
			 	|	TOK_IDENT
			 	;

InterType			:	InterBase SEP_DOTDOT InterBase
			 	;

InterBase			:	NSInterBase
			 	|	OP_SUB NSInterBase
			 	;

NSInterBase			:	TOK_IDENT
			 	|	TOK_INTEGER
			 	;

ArrayType			:	KW_ARRAY SEP_CO ListArrayIndex SEP_CF KW_OF Type
			 	;

ListArrayIndex			:	ListArrayIndex SEP_COMMA ArrayIndex
				|	ArrayIndex
				;

ArrayIndex			:	TOK_IDENT
			 	|	InterType
			 	;

RecordType			:	KW_RECORD RecordFields KW_END
			 	;

RecordFields			:	RecordFields SEP_SCOL RecordField
			 	|	RecordField
			 	;

RecordField			:	ListIdent SEP_DOTS Type
			 	;

PointerType			:	OP_PTR Type
			 	;

BlockCode			:	KW_BEGIN ListInstr KW_END
				|	KW_BEGIN ListInstr SEP_SCOL KW_END
				|	KW_BEGIN KW_END
			 	;

ListInstr			:	ListInstr SEP_SCOL Instr
			 	|	Instr
			 	;

Instr				:	KW_WHILE Expression KW_DO Instr {
						//c3a_instr_while();
					}
			 	|	KW_REPEAT ListInstr KW_UNTIL Expression {
						//c3a_instr_repeat();
					}
			 	|	KW_FOR TOK_IDENT OP_AFFECT Expression ForDirection Expression KW_DO Instr {
						//c3a_instr_for();
					}
			 	|	KW_IF Expression KW_THEN Instr %prec KW_IFX {
						//c3a_instr_ifthen();
					}
			 	|	KW_IF Expression KW_THEN Instr KW_ELSE Instr {
						//c3a_instr_ifthenelse();
					}
			 	|	LeftExpr OP_AFFECT Expression {
						//c3a_instr_affect();
					}
			 	|	Call {
						//c3a_instr_call();
					}
			 	|	BlockCode {
						//c3a_instr_blockcode();
					}
			 	;

ForDirection			:	KW_TO
			 	|	KW_DOWNTO
			 	;

Expression			:	MathExpr
			 	|	CompExpr
			 	|	BoolExpr
			 	|	AtomExpr
			 	|	VarExpr
				|	Call
			 	;

MathExpr			:	Expression OP_ADD Expression
			 	|	Expression OP_SUB Expression
			 	|	Expression OP_MUL Expression
			 	|	Expression OP_SLASH Expression
			 	|	Expression KW_DIV Expression
			 	|	Expression KW_MOD Expression
			 	|	Expression OP_EXP Expression
			 	|	OP_SUB Expression %prec OP_NEG
			 	|	OP_ADD Expression %prec OP_POS
			 	;


CompExpr			:	Expression OP_EQ Expression

			 	|	Expression OP_NEQ Expression
			 	|	Expression OP_LT Expression
			 	|	Expression OP_LTE Expression
			 	|	Expression OP_GT Expression
			 	|	Expression OP_GTE Expression
			 	;

BoolExpr			:	Expression KW_AND Expression
			 	|	Expression KW_OR Expression
			 	|	Expression KW_XOR Expression
			 	|	KW_NOT Expression
			 	;

AtomExpr			:	SEP_PO Expression SEP_PF
			 	|	TOK_INTEGER
			 	|	TOK_REAL
			 	|	TOK_BOOLEAN
			 	|	KW_NIL
			 	|	TOK_STRING
			 	;

VarExpr				:	TOK_IDENT
				|	VarExpr SEP_CO ListIndices SEP_CF
				|	VarExpr SEP_DOT TOK_IDENT %prec OP_DOT
				|	VarExpr OP_PTR
				;

LeftExpr 			:	TOK_IDENT
				|	LeftExpr SEP_DOT TOK_IDENT
				|	LeftExpr OP_PTR
				|	LeftExpr SEP_CO ListIndices SEP_CF
				;

Call			 	:	TOK_IDENT Parameters
				;

Parameters			:	SEP_PO ListParameters SEP_PF
				|	SEP_PO SEP_PF
				;

ListIndices			:	ListIndices SEP_COMMA Expression
				|	Expression
				;

ListParameters			:	ListParameters SEP_COMMA Expression
				|	Expression
				;

%%

int main(int argc, char* argv[]) {
	yyparse();
}
