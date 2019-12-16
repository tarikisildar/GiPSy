%{	
	#include<stdio.h>
        int yylex(void);
        int yyerror(const char *s);
        int success = 1;

%}
%token PLUS MINUS
%token MULTIPLY DIVIDE MODULUS SEMICOLON GREATER SMALLER GEQUAL LEQUAL FROM
%token COMMA DOT NOT MINUS_EQ INCREMENT DECREMENT ASSIGNMENT_OP NOT_EQUAL EQUALITY_CHECK AND_OP OR_OP
%token LEFTBRACE RIGHTBRACE LEFT_PARANT RIGHT_PARANT LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE
%token SPECIAL IF ELSE FOR WHILE CLASS NEW IMPORT M PLUS_EQ VOID RETURN PASS
%token INTEGER_TYPE STRING_TYPE FLOAT_TYPE ID INTEGER FLOAT STRING UNSIGNED
%define parse.error verbose
%%
start: program  {
                             return 0;
                }

program:		header program | decl_list

header :		IMPORT ID SEMICOLON
              			| FROM import_from IMPORT import_list SEMICOLON

import_from:		ID | ID DOT ID

import_list:		ID | ID COMMA ID

decl_list:		decl | decl decl_list

decl:			function_def
    			| class_def
			| decl_type decl_init SEMICOLON
			| decl_type SEMICOLON


function_def:		return_type LEFT_PARANT decl_type_list RIGHT_PARANT LEFTBRACE statement_list RIGHTBRACE
	    	    		| return_type LEFT_PARANT RIGHT_PARANT LEFTBRACE statement_list RIGHTBRACE 

statement_list:		statement
	      	      		| statement statement_list 

statement:		PASS SEMICOLON
	 	 		| if_statement
	 		| loop_statements
			| func_call SEMICOLON
			| decl
			| return_statement
			| expression SEMICOLON	
if_statement:		IF LEFT_PARANT expression RIGHT_PARANT LEFTBRACE statement_list RIGHTBRACE ELSE LEFTBRACE statement_list RIGHTBRACE
	    	    		| IF LEFT_PARANT expression RIGHT_PARANT LEFTBRACE statement_list RIGHTBRACE

loop_statements:	for | while

while:			WHILE LEFT_PARANT expression RIGHT_PARANT LEFTBRACE statement_list RIGHTBRACE

for:			FOR LEFT_PARANT for_init SEMICOLON expression SEMICOLON expression RIGHT_PARANT LEFTBRACE statement_list RIGHTBRACE

for_init:		decl_type decl_init
				| expression

return_statement:	RETURN parameter SEMICOLON

return_type:		decl_type | VOID ID	

class_def:		CLASS ID LEFTBRACE constructor_list decl_list RIGHTBRACE
	 	 		| CLASS ID LEFTBRACE constructor_list RIGHTBRACE
			| CLASS ID LEFTBRACE decl_list RIGHTBRACE

constructor_list:	constructor
					| constructor constructor_list

constructor:		ID LEFT_PARANT decl_type_list RIGHT_PARANT LEFTBRACE statement_list RIGHTBRACE 
	   	   		| ID LEFT_PARANT RIGHT_PARANT LEFTBRACE statement_list RIGHTBRACE 

decl_type_list:		decl_type 
	      	      		| decl_type COMMA decl_type_list

decl_type:		list_type list_dim
	 	 		| type_const ID
			| ID ID

list_type:		type_const ID | ID

list_element:		non_assigned_parameter COMMA list_element
	    	    		| non_assigned_parameter

list: 			LEFTBRACE list COMMA list RIGHTBRACE
        			| LEFTBRACE list RIGHTBRACE 
    			| list_element

list_dim: 		LEFT_SQUARE_BRACE UNSIGNED RIGHT_SQUARE_BRACE
				| LEFT_SQUARE_BRACE UNSIGNED RIGHT_SQUARE_BRACE list_dim
				| LEFT_SQUARE_BRACE ID RIGHT_SQUARE_BRACE

decl_init:		ASSIGNMENT_OP expression
	 	 		| ASSIGNMENT_OP LEFTBRACE list RIGHTBRACE

expression:		expression assignment_op expression_post
	  	  		| expression_post

expression_post:  expression_post post_pre_ops
			| post_pre_ops expression_post
			| NOT expression_post
            | term_comp_log
            
post_pre_ops:		INCREMENT | DECREMENT

term_comp_log:		term_comp_log comprasion_op term_add
	     	     		| term_comp_log logical_op term_add
			| term_add

logical_op:		AND_OP | OR_OP

add_op:			PLUS | MINUS

mult_op:		MULTIPLY | DIVIDE | MODULUS

assignment_op:		ASSIGNMENT_OP | PLUS_EQ | MINUS_EQ 

comprasion_op:		SMALLER | GREATER | GEQUAL | LEQUAL | EQUALITY_CHECK

number:			INTEGER | FLOAT | UNSIGNED

type_const:		INTEGER_TYPE | STRING_TYPE | FLOAT_TYPE

term_add:		term_add add_op term_mult
				| term_mult

term_mult:		term_mult mult_op term_paranthesis 
	 	 		| term_paranthesis

term_paranthesis:	LEFT_PARANT expression RIGHT_PARANT | ID | ID list_dim | number | STRING | func_call | class_init

func_call:		func_name LEFT_PARANT  parameter_list RIGHT_PARANT
	 	 		| func_name LEFT_PARANT  RIGHT_PARANT 

func_name:		ID DOT func_name | ID

class_init:		NEW ID LEFT_PARANT parameter_list RIGHT_PARANT
	  	  		| NEW ID LEFT_PARANT RIGHT_PARANT 

parameter_list:		parameter
	      	      		| parameter COMMA parameter_list


parameter:		assigned_parameter
	 	 		| non_assigned_parameter

assigned_parameter:	ID ASSIGNMENT_OP non_assigned_parameter

non_assigned_parameter:	 expression 

%%

int main()
{
    yyparse();
    if(success)
        printf("Parsing Successful\n");
    return 0;
}

int yyerror(const char *msg)
{
        extern int yylineno;
        printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
        success = 0;
        return 0;
}



