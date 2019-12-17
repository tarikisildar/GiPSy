/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "gipsy.y" /* yacc.c:339  */
	
	#include<stdio.h>
        int yylex(void);
        int yyerror(const char *s);
        int success = 1;


#line 74 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    IF = 287,
    ELSE = 288,
    FOR = 289,
    WHILE = 290,
    CLASS = 291,
    NEW = 292,
    IMPORT = 293,
    M = 294,
    PLUS_EQ = 295,
    VOID = 296,
    RETURN = 297,
    PASS = 298,
    INTEGER_TYPE = 299,
    STRING_TYPE = 300,
    FLOAT_TYPE = 301,
    ID = 302,
    INTEGER = 303,
    FLOAT = 304,
    STRING = 305,
    UNSIGNED = 306,
    BI_SHOWONMAP = 307,
    BI_SEARCHLOCATION = 308,
    BI_GETROADSPEED = 309,
    BI_GETLOCATION = 310,
    BI_SHOWTARGET = 311,
    GRAPH_TYPE = 312,
    ROAD_TYPE = 313,
    USER_TYPE = 314,
    GPSLOC_TYPE = 315,
    CROAD_TYPE = 316
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
#define IF 287
#define ELSE 288
#define FOR 289
#define WHILE 290
#define CLASS 291
#define NEW 292
#define IMPORT 293
#define M 294
#define PLUS_EQ 295
#define VOID 296
#define RETURN 297
#define PASS 298
#define INTEGER_TYPE 299
#define STRING_TYPE 300
#define FLOAT_TYPE 301
#define ID 302
#define INTEGER 303
#define FLOAT 304
#define STRING 305
#define UNSIGNED 306
#define BI_SHOWONMAP 307
#define BI_SEARCHLOCATION 308
#define BI_GETROADSPEED 309
#define BI_GETLOCATION 310
#define BI_SHOWTARGET 311
#define GRAPH_TYPE 312
#define ROAD_TYPE 313
#define USER_TYPE 314
#define GPSLOC_TYPE 315
#define CROAD_TYPE 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 247 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   570

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  254

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    17,    17,    21,    21,    23,    24,    26,    26,    28,
      28,    30,    30,    32,    33,    34,    35,    38,    39,    41,
      42,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      54,    54,    56,    58,    60,    61,    63,    65,    65,    67,
      68,    69,    71,    72,    74,    75,    77,    78,    80,    81,
      82,    83,    85,    85,    85,    85,    85,    87,    87,    87,
      89,    90,    92,    93,    94,    96,    97,    98,   100,   101,
     103,   104,   106,   107,   108,   109,   111,   111,   113,   114,
     115,   117,   117,   119,   119,   121,   121,   121,   123,   123,
     123,   125,   125,   125,   125,   125,   125,   127,   127,   127,
     129,   129,   129,   131,   132,   134,   135,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   139,   140,   141,   142,
     143,   144,   145,   147,   147,   149,   150,   152,   152,   154,
     155,   158,   159,   161,   163
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
  "MODULUS", "SEMICOLON", "GREATER", "SMALLER", "GEQUAL", "LEQUAL", "FROM",
  "COMMA", "DOT", "NOT", "MINUS_EQ", "INCREMENT", "DECREMENT",
  "ASSIGNMENT_OP", "NOT_EQUAL", "EQUALITY_CHECK", "AND_OP", "OR_OP",
  "LEFTBRACE", "RIGHTBRACE", "LEFT_PARANT", "RIGHT_PARANT",
  "LEFT_SQUARE_BRACE", "RIGHT_SQUARE_BRACE", "SPECIAL", "IF", "ELSE",
  "FOR", "WHILE", "CLASS", "NEW", "IMPORT", "M", "PLUS_EQ", "VOID",
  "RETURN", "PASS", "INTEGER_TYPE", "STRING_TYPE", "FLOAT_TYPE", "ID",
  "INTEGER", "FLOAT", "STRING", "UNSIGNED", "BI_SHOWONMAP",
  "BI_SEARCHLOCATION", "BI_GETROADSPEED", "BI_GETLOCATION",
  "BI_SHOWTARGET", "GRAPH_TYPE", "ROAD_TYPE", "USER_TYPE", "GPSLOC_TYPE",
  "CROAD_TYPE", "$accept", "start", "program", "header", "import_from",
  "import_list", "decl_list", "decl", "function_def", "statement_list",
  "statement", "if_statement", "loop_statements", "while", "for",
  "for_init", "return_statement", "return_type", "class_def",
  "constructor_list", "constructor", "decl_type_list", "decl_type",
  "builtin_type", "list_type", "list_element", "list", "list_dim",
  "decl_init", "expression", "expression_post", "post_pre_ops",
  "term_comp_log", "logical_op", "add_op", "mult_op", "assignment_op",
  "comprasion_op", "number", "type_const", "term_add", "term_mult",
  "term_paranthesis", "func_call", "func_name", "class_init", "class_name",
  "parameter_list", "parameter", "assigned_parameter",
  "non_assigned_parameter", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

#define YYPACT_NINF -148

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-148)))

#define YYTABLE_NINF -125

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,   -34,   -31,   -24,   -17,  -148,  -148,  -148,    -7,  -148,
    -148,  -148,  -148,  -148,     8,  -148,     1,  -148,   264,  -148,
      49,  -148,    14,    31,     6,    42,    77,    72,    90,   111,
    -148,  -148,  -148,  -148,  -148,   127,  -148,   279,   128,   113,
      48,  -148,   117,   112,   119,   305,  -148,   151,   161,   164,
     443,  -148,  -148,   320,   443,   208,    71,  -148,  -148,     6,
    -148,   171,   173,   175,   180,   181,    68,    83,   443,   139,
    -148,   130,   123,  -148,     6,   182,  -148,  -148,   183,   185,
    -148,   177,   202,     5,   190,    80,   170,   187,   193,   427,
      83,   320,  -148,   194,    68,   211,    63,  -148,  -148,   199,
     203,  -148,  -148,   443,   443,   443,   443,   443,  -148,  -148,
    -148,   443,  -148,    83,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,   514,   514,  -148,  -148,   514,  -148,  -148,  -148,
     514,  -148,   361,  -148,     6,   207,  -148,   136,  -148,  -148,
     201,   230,  -148,   231,   232,   234,   484,   254,    28,  -148,
     237,   187,  -148,  -148,  -148,  -148,  -148,     4,     2,   187,
    -148,    27,  -148,   443,  -148,   402,   256,  -148,    73,   103,
     236,   364,   365,    83,   130,   130,   123,  -148,  -148,   150,
     244,   259,  -148,  -148,  -148,  -148,   249,   247,  -148,   443,
     233,   443,   288,  -148,  -148,  -148,  -148,  -148,   273,   320,
    -148,  -148,  -148,   274,   443,  -148,  -148,  -148,  -148,   443,
    -148,   484,   187,   276,   366,   295,   287,    68,   379,  -148,
    -148,   286,  -148,   405,  -148,  -148,   289,   187,   292,   443,
    -148,   293,  -148,  -148,  -148,   294,   187,    57,   187,  -148,
     311,   443,   314,   280,   406,  -148,   317,   318,   187,   187,
     322,   327,  -148,  -148
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,   100,   101,   102,    58,    52,
      53,    54,    55,    56,     0,     2,     0,     4,    11,    13,
       0,    14,    37,     0,     0,     0,     7,     0,     0,     0,
      38,    50,     1,     3,    12,     0,    16,     0,     0,    51,
       0,    48,    49,     0,     0,     0,     5,     0,     0,    46,
       0,    76,    77,     0,     0,     0,   108,    97,    98,   111,
      99,     0,     0,     0,     0,     0,    68,    71,     0,    75,
     110,    80,   104,   106,   113,     0,   115,    15,     0,     0,
       8,     9,     0,    58,     0,     0,    42,     0,     0,     0,
      74,     0,    64,     0,   134,    61,     0,   127,   128,     0,
       0,   109,   112,     0,     0,     0,     0,     0,    90,    88,
      89,     0,    72,    73,    92,    91,    93,    94,    96,    95,
      81,    82,     0,     0,    83,    84,     0,    85,    86,    87,
       0,   114,     0,    67,    65,     0,     6,     0,    41,    40,
       0,     0,    43,     0,     0,     0,     0,     0,   108,    25,
       0,    19,    22,    23,    31,    30,    26,     0,   113,     0,
      47,     0,    69,     0,   107,     0,   124,   123,     0,     0,
       0,     0,     0,    70,    79,    78,   103,   105,   117,   108,
       0,   129,   131,   132,    66,    10,     0,     0,    39,     0,
       0,     0,     0,    21,    18,    20,    27,    24,     0,     0,
      63,    60,   126,     0,     0,   119,   120,   121,   122,     0,
     116,     0,     0,     0,     0,     0,     0,    35,     0,    36,
      17,     0,   125,     0,   133,   130,     0,     0,     0,     0,
      34,     0,    62,   118,    45,     0,     0,     0,     0,    44,
       0,     0,     0,    29,     0,    32,     0,     0,     0,     0,
       0,     0,    28,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,   298,  -148,  -148,  -148,   -12,     9,  -148,  -131,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,   258,
    -148,   -74,   -33,   299,  -148,   156,   -87,   -23,   140,   -37,
     -39,   -64,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
      22,   229,   228,   -80,   260,  -148,  -148,  -147,   213,  -148,
    -127
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    27,    82,    17,   149,    19,   150,
     151,   152,   153,   154,   155,   215,   156,    20,    21,    85,
      86,    48,    22,    23,    24,    92,    93,   101,    38,    94,
      67,    68,    69,   122,   126,   130,   111,   123,    70,    25,
      71,    72,    73,    74,    75,    76,    99,   180,   181,   182,
      95
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,    41,    49,   112,   161,   183,    34,   158,    32,    18,
     197,    90,   196,    26,     1,   160,    28,    96,   203,   183,
     195,   108,    36,    29,   109,    18,   112,    18,   198,   113,
      30,    40,   137,    84,    37,    40,   102,     2,   183,     3,
      31,   199,     4,   100,   110,     5,     6,     7,     8,   112,
     157,   131,    31,   200,    18,  -124,    49,    40,     9,    10,
      11,    12,    13,   187,   225,   241,   168,   169,   170,   171,
     172,   158,   173,   140,   108,    31,    35,   109,    39,   158,
     108,   226,   224,   109,   183,   108,   100,   204,   109,    42,
     108,   164,    43,   109,    18,    78,   235,   110,  -124,    79,
      40,    51,    52,   110,    49,   240,   139,   242,   110,   112,
      44,   184,   221,   110,   157,    45,     2,   250,   251,    46,
     108,     4,   157,   109,     5,     6,     7,     8,   127,   128,
     129,   205,   158,   124,   125,   131,    77,     9,    10,    11,
      12,    13,   -59,   110,   174,   175,   -57,   158,   114,   115,
     116,   117,   214,   217,   218,    47,   158,   216,   158,    80,
     118,   119,   120,   121,   186,   100,    81,   223,   158,   158,
     209,     5,     6,     7,     8,   157,    87,  -124,    89,    40,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    88,
     157,   135,   237,     9,    10,    11,    12,    13,   103,   157,
     104,   157,   105,    50,   244,    51,    52,   106,   107,   132,
     136,   157,   157,   133,    54,   134,   138,   141,   159,   143,
     162,   144,   145,     2,    55,   163,   165,   188,     4,   146,
     147,     5,     6,     7,   148,    57,    58,    59,    60,    61,
      62,    63,    64,    65,     9,    10,    11,    12,    13,    50,
     166,    51,    52,   108,   185,    97,   109,   137,   189,   190,
      54,   191,   193,   194,   206,     9,    10,    11,    12,    13,
      55,   100,   210,   211,   212,   213,   110,     5,     6,     7,
     148,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       9,    10,    11,    12,    13,    50,   219,    51,    52,   220,
       2,   227,   222,   229,    53,     4,    54,    37,     5,     6,
       7,     8,   232,   246,    33,   234,    55,   236,   238,   201,
     239,     9,    10,    11,    12,    13,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    50,   243,    51,    52,
     245,     2,   248,   249,   142,    91,     4,    54,   252,     5,
       6,     7,    83,   253,    98,   176,   230,    55,   177,   192,
     167,     0,     9,    10,    11,    12,    13,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    50,     0,    51,
      52,   108,   108,   108,   109,   109,   109,     0,    54,   178,
       0,     0,   207,   208,   228,     0,   108,     0,    55,   109,
       0,     0,     0,     0,   110,   110,   110,   231,   179,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    50,   110,
      51,    52,   108,   108,     0,   109,   109,     0,     0,    54,
     202,     0,     0,   233,   247,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,   110,   110,     0,     0,   179,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    50,
       0,    51,    52,     0,     0,     0,     0,     0,     0,     0,
      54,     5,     6,     7,     8,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      50,     0,    51,    52,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

static const yytype_int16 yycheck[] =
{
      37,    24,    35,    67,    91,   132,    18,    87,     0,     0,
       8,    50,     8,    47,    13,    89,    47,    54,   165,   146,
     151,    17,     8,    47,    20,    16,    90,    18,   159,    68,
      47,    29,    27,    45,    20,    29,    59,    36,   165,    38,
      47,    14,    41,    15,    40,    44,    45,    46,    47,   113,
      87,    74,    47,    26,    45,    27,    89,    29,    57,    58,
      59,    60,    61,   137,   211,     8,   103,   104,   105,   106,
     107,   151,   111,    85,    17,    47,    27,    20,    47,   159,
      17,   212,   209,    20,   211,    17,    15,    14,    20,    47,
      17,    28,    15,    20,    85,    47,   227,    40,    27,    51,
      29,    18,    19,    40,   137,   236,    26,   238,    40,   173,
      38,   134,   199,    40,   151,    25,    36,   248,   249,     8,
      17,    41,   159,    20,    44,    45,    46,    47,     5,     6,
       7,    28,   212,     3,     4,   158,     8,    57,    58,    59,
      60,    61,    29,    40,   122,   123,    29,   227,     9,    10,
      11,    12,   189,   190,   191,    28,   236,   190,   238,    47,
      21,    22,    23,    24,    28,    15,    47,   204,   248,   249,
      20,    44,    45,    46,    47,   212,    25,    27,    14,    29,
      44,    45,    46,    47,    57,    58,    59,    60,    61,    28,
     227,    14,   229,    57,    58,    59,    60,    61,    27,   236,
      27,   238,    27,    16,   241,    18,    19,    27,    27,    27,
       8,   248,   249,    30,    27,    30,    26,    47,    25,    32,
      26,    34,    35,    36,    37,    14,    27,    26,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    16,
      47,    18,    19,    17,    47,    47,    20,    27,    27,    27,
      27,    27,     8,    26,    28,    57,    58,    59,    60,    61,
      37,    15,    28,    14,    25,    28,    40,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    16,     8,    18,    19,    26,
      36,    25,    28,     8,    25,    41,    27,    20,    44,    45,
      46,    47,    26,    33,    16,    26,    37,    25,    25,   163,
      26,    57,    58,    59,    60,    61,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    16,    26,    18,    19,
      26,    36,    25,    25,    86,    25,    41,    27,    26,    44,
      45,    46,    47,    26,    55,   126,   216,    37,   130,   146,
     100,    -1,    57,    58,    59,    60,    61,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    16,    -1,    18,
      19,    17,    17,    17,    20,    20,    20,    -1,    27,    28,
      -1,    -1,    28,    28,    28,    -1,    17,    -1,    37,    20,
      -1,    -1,    -1,    -1,    40,    40,    40,    28,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    16,    40,
      18,    19,    17,    17,    -1,    20,    20,    -1,    -1,    27,
      28,    -1,    -1,    28,    28,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    40,    40,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    16,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    57,    58,    59,    60,    61,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      16,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    36,    38,    41,    44,    45,    46,    47,    57,
      58,    59,    60,    61,    63,    64,    65,    68,    69,    70,
      79,    80,    84,    85,    86,   101,    47,    66,    47,    47,
      47,    47,     0,    64,    68,    27,     8,    20,    90,    47,
      29,    89,    47,    15,    38,    25,     8,    28,    83,    84,
      16,    18,    19,    25,    27,    37,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    91,    92,    93,    94,
     100,   102,   103,   104,   105,   106,   107,     8,    47,    51,
      47,    47,    67,    47,    68,    81,    82,    25,    28,    14,
      92,    25,    87,    88,    91,   112,    91,    47,    85,   108,
      15,    89,    89,    27,    27,    27,    27,    27,    17,    20,
      40,    98,    93,    92,     9,    10,    11,    12,    21,    22,
      23,    24,    95,    99,     3,     4,    96,     5,     6,     7,
      97,    89,    27,    30,    30,    14,     8,    27,    26,    26,
      68,    47,    81,    32,    34,    35,    42,    43,    47,    69,
      71,    72,    73,    74,    75,    76,    78,    91,   105,    25,
      83,    88,    26,    14,    28,    27,    47,   106,    91,    91,
      91,    91,    91,    92,   102,   102,   103,   104,    28,    47,
     109,   110,   111,   112,    89,    47,    28,    83,    26,    27,
      27,    27,   110,     8,    26,    71,     8,     8,    71,    14,
      26,    87,    28,   109,    14,    28,    28,    28,    28,    20,
      28,    14,    25,    28,    91,    77,    84,    91,    91,     8,
      26,    88,    28,    91,   112,   109,    71,    25,    28,     8,
      90,    28,    26,    28,    26,    71,    25,    91,    25,    26,
      71,     8,    71,    26,    91,    26,    33,    28,    25,    25,
      71,    71,    26,    26
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    73,    73,
      74,    74,    75,    76,    77,    77,    78,    79,    79,    80,
      80,    80,    81,    81,    82,    82,    83,    83,    84,    84,
      84,    84,    85,    85,    85,    85,    85,    86,    86,    86,
      87,    87,    88,    88,    88,    89,    89,    89,    90,    90,
      91,    91,    92,    92,    92,    92,    93,    93,    94,    94,
      94,    95,    95,    96,    96,    97,    97,    97,    98,    98,
      98,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     101,   101,   101,   102,   102,   103,   103,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     5,     1,     3,     1,
       3,     1,     2,     1,     1,     3,     2,     7,     6,     1,
       2,     2,     1,     1,     2,     1,     1,     2,    11,     7,
       1,     1,     7,    11,     2,     1,     3,     1,     2,     6,
       5,     5,     1,     2,     7,     6,     1,     3,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     2,     1,     2,
       3,     1,     5,     3,     1,     3,     4,     3,     2,     4,
       3,     1,     2,     2,     2,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     3,     1,     2,
       1,     1,     2,     1,     2,     1,     4,     3,     6,     4,
       4,     4,     4,     3,     1,     5,     4,     1,     1,     1,
       3,     1,     1,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 17 "gipsy.y" /* yacc.c:1646  */
    {
                             return 0;
                }
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1589 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 165 "gipsy.y" /* yacc.c:1906  */


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



