
%option yylineno


%{
        #include<stdio.h>
        #include"y.tab.h"
%}

digit  [0-9]
integer ([+-]?[1-9]{digit}*|0)
unsignedInteger ([1-9]{digit}*|0)
float ([+-]?{digit}*(\.){digit}+)
lower_letter [a-z]
upper_letter [A-Z]
alphabetic ({lower_letter}|{upper_letter}|_)
character ({digit}|{alphabetic})
special ([_+\-\{\}\(\)\[\]\=\/!%&$])
string ((\"([^\\\"]|\\.)*\")|(\'([^\\\']|\\.)*\'))
var_ident {alphabetic}+{character}*
list {var_ident}(\[{integer}*\])+



%%

"+"			return PLUS;
"-"			return MINUS;
"*"			return MULTIPLY;
"/"			return DIVIDE;
"%"			return MODULUS;
";"			return SEMICOLON;
">"			return GREATER;
"<"			return SMALLER;
">="			return GEQUAL;
"<="			return LEQUAL;
","			return COMMA;
"."			return DOT;
"!"			return NOT;
"+="			return PLUS_EQ;
"-="			return MINUS_EQ;
"++"			return INCREMENT;
"--"			return DECREMENT;
"="			return ASSIGNMENT_OP;
"!="			return NOT_EQUAL;
"=="			return EQUALITY_CHECK;
"{"			return LEFTBRACE;
"}"			return RIGHTBRACE;
"("			return LEFT_PARANT;
")"			return RIGHT_PARANT;
"["			return LEFT_SQUARE_BRACE;
"]"			return RIGHT_SQUARE_BRACE;
{special}		return SPECIAL;
"showonmap"		return BI_SHOWONMAP;
"searchlocation"	return BI_SEARCHLOCATION;
"getroadspeed"		return BI_GETROADSPEED;
"getlocation"		return BI_GETLOCATION;
"showtarget"		return BI_SHOWTARGET;
"Graph"			return GRAPH_TYPE;
"Road"			return ROAD_TYPE;
"User"			return USER_TYPE;
"GpsLoc"		return GPSLOC_TYPE;
"and"			return AND_OP;
"or"			return OR_OP;
"if"			return IF;
"else"			return ELSE;
"for"			return FOR;
"while"			return WHILE;
"pass"			return PASS;
"class"			return CLASS;
"new"			return NEW;
"import"		return IMPORT;
"from"			return FROM;				
"void"			return VOID;
"return"		return RETURN;
"int"			return INTEGER_TYPE;
"string"		return STRING_TYPE;
"float"			return FLOAT_TYPE;
{var_ident}		return ID;
{unsignedInteger}	return UNSIGNED;
{integer}		return INTEGER;
{float}			return FLOAT;
{string}		return STRING;
\n                      {};
[ \t]			{}; 			
%%

int yywrap(void)		{ return 1; }




