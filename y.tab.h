/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PLUS = 258,
    MINUS = 259,
    MULTIPLY = 260,
    DIVIDE = 261,
    MODULUS = 262,
    SEMICOLON = 263,
    GREATER = 264,
    SMALLER = 265,
    GEQUAL = 266,
    LEQUAL = 267,
    FROM = 268,
    COMMA = 269,
    DOT = 270,
    NOT = 271,
    MINUS_EQ = 272,
    INCREMENT = 273,
    DECREMENT = 274,
    ASSIGNMENT_OP = 275,
    NOT_EQUAL = 276,
    EQUALITY_CHECK = 277,
    AND_OP = 278,
    OR_OP = 279,
    LEFTBRACE = 280,
    RIGHTBRACE = 281,
    LEFT_PARANT = 282,
    RIGHT_PARANT = 283,
    LEFT_SQUARE_BRACE = 284,
    RIGHT_SQUARE_BRACE = 285,
    SPECIAL = 286,
    PRINT = 287,
    IF = 288,
    ELSE = 289,
    FOR = 290,
    WHILE = 291,
    CLASS = 292,
    NEW = 293,
    IMPORT = 294,
    MAIN = 295,
    PLUS_EQ = 296,
    VOID = 297,
    RETURN = 298,
    PASS = 299,
    INTEGER_TYPE = 300,
    STRING_TYPE = 301,
    FLOAT_TYPE = 302,
    ID = 303,
    INTEGER = 304,
    FLOAT = 305,
    STRING = 306,
    UNSIGNED = 307
  };
#endif
/* Tokens.  */
#define PLUS 258
#define MINUS 259
#define MULTIPLY 260
#define DIVIDE 261
#define MODULUS 262
#define SEMICOLON 263
#define GREATER 264
#define SMALLER 265
#define GEQUAL 266
#define LEQUAL 267
#define FROM 268
#define COMMA 269
#define DOT 270
#define NOT 271
#define MINUS_EQ 272
#define INCREMENT 273
#define DECREMENT 274
#define ASSIGNMENT_OP 275
#define NOT_EQUAL 276
#define EQUALITY_CHECK 277
#define AND_OP 278
#define OR_OP 279
#define LEFTBRACE 280
#define RIGHTBRACE 281
#define LEFT_PARANT 282
#define RIGHT_PARANT 283
#define LEFT_SQUARE_BRACE 284
#define RIGHT_SQUARE_BRACE 285
#define SPECIAL 286
#define PRINT 287
#define IF 288
#define ELSE 289
#define FOR 290
#define WHILE 291
#define CLASS 292
#define NEW 293
#define IMPORT 294
#define MAIN 295
#define PLUS_EQ 296
#define VOID 297
#define RETURN 298
#define PASS 299
#define INTEGER_TYPE 300
#define STRING_TYPE 301
#define FLOAT_TYPE 302
#define ID 303
#define INTEGER 304
#define FLOAT 305
#define STRING 306
#define UNSIGNED 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
